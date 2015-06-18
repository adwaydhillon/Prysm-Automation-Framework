import csv
import argparse
import HTML
import gviz_api


page_template = """
    <html>
      <script src="https://www.google.com/jsapi" type="text/javascript"></script>
      <script>
        google.load('visualization', '1', {packages:['table']});

        google.setOnLoadCallback(drawTable);
        function drawTable() {
            var json_table = new google.visualization.Table(document.getElementById('table_div_json', 'arrowformat_div', 'colorformat_div'));
            var json_data = new google.visualization.DataTable(%(json)s, 0.6);
            var formatter = new google.visualization.ArrowFormat();
            formatter.format(json_data, 1); // Apply formatter to second column

            json_table.draw(json_data, {allowHtml: true, showRowNumber: true});


        }
      </script>

      <script type="text/javascript">
      google.load("visualization", "1", {packages:["corechart"]});
      google.setOnLoadCallback(drawChart);
      function drawChart() {

        var data = google.visualization.arrayToDataTable(%(list_tally)s);

        var options = {
          title: 'Tests Report'
        };

        var chart = new google.visualization.PieChart(document.getElementById('piechart'));

        chart.draw(data, options);
      }
    </script>

      <body>
        <H1>IP2 Regression</H1>
        <div id="table_div_json"></div>
        <div id="piechart" style="width: 900px; height: 500px;"></div>
      </body>
    </html>
    """


def readFile(fileName):
    with open(fileName) as csvfile:
        reader = csv.DictReader(csvfile)
        table_data = []
        for row in reader:
            r = {}
            for header in row:
                if (header.lstrip().rstrip() == 'Test Name'):
                    r[header.lstrip().rstrip()] = '<a href="http://stackoverflow.com/questions/14343468/add-html-link-to-google-charts-table">' + str(row[header]).lstrip().rstrip() + '</a>'
                else:
                    r[header.lstrip().rstrip()] = row[header]
            table_data.append(r)

        description = {}
        for header in table_data[0]:
            description[(header.lstrip()).rstrip()] = ("string", (header.lstrip()).rstrip())
    
    with open(fileName) as csvfile:
        header_list = []
        reader = csv.reader(csvfile)
        for header in reader.next():
            header_list.append(header.lstrip().rstrip())
        header_list = str(header_list)
        columns_order = '(' + header_list[1:len(header_list)-1] + ')'
    maintain_tally(description, table_data, columns_order)
        
def maintain_tally(description, table_data, columns_order):
    tally = {}
    for row in table_data:
        if row['Test Status'] != '':
            if tally.has_key(row['Test Status']):
                tally[row['Test Status']] += 1
            else:
                tally[row['Test Status']] = 1

    list_tally = []
    list_tally.append(['Test Status', 'Frequency'])
    
    for test_status in tally:
        list_tally.append([test_status, tally[test_status]])

    insert_in_template(description, table_data, list_tally, columns_order)

def insert_in_template(description, table_data, list_tally, column_order):
    data_table = gviz_api.DataTable(description)
    data_table.LoadData(table_data)
    # Creating a JSon string of the table
    json = data_table.ToJSon(columns_order = ('Test Name', 'Test Status', 'Test Start Time', 'Test End Time', 'Test Run Time'))
    gen_html(page_template % vars())


def gen_html(stuff):
    HTMLFILE = 'prysm_output.html'
    f = open(HTMLFILE, 'w')
    f.write(stuff)
    f.close()

def main():
    parser = argparse.ArgumentParser(description='Read the file')
    parser.add_argument('fileName', help='Input the filename which has to be read')
    args = parser.parse_args()
    fileName = args.fileName
    readFile(fileName)

if __name__ == '__main__':
    main()