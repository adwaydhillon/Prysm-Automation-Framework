import csv
import argparse
import HTML

def readFile(fileName):
    with open(fileName) as csvfile:
        reader = csv.reader(csvfile)
        i = 0
        table_data = []
        for row in reader:
            if (i == 0):
                header_row = row
            else:
                table_data.append(row)
            i += 1
        maintain_tally(header_row, table_data)

def maintain_tally(header_row, table_data):
    i = 0
    tally = {}
    for header in header_row:
        if (header == ' Test Status'):
            for row in table_data:
                if row[i] != '':
                    if tally.has_key(row[i]):
                        tally[row[i]] += 1
                    else:
                        tally.update({row[i]: 1})
        else:
            i += 1

    list_tally =[]
    list_tally.append(['Test Status', 'Outcomes'])
    
    for outcome in tally:
        list_tally.append([outcome, tally[outcome]])
    
    gen_html(header_row, table_data, list_tally)

def gen_html(head_row, table_data, list_tally):
    HTMLFILE = 'prysm_output.html'
    f = open(HTMLFILE, 'w')
    html_table = HTML.Table(table_data,
            header_row = head_row)
    html_table = str(html_table)
    f.write(html_table)
    f.write('<p>')
    f.close()

    draw_pie_chart(list_tally, HTMLFILE)

def draw_pie_chart(list_tally, filename):
    f = open(filename, 'a')
    f.write('\n<html>\n')
    f.write('<head>\n')
    f.write('<script type="text/javascript" src="https://www.google.com/jsapi"></script>\n')
    f.write('<script type="text/javascript">\n')
    f.write('google.load("visualization", "1", {packages:["corechart"]});\n')
    f.write('google.setOnLoadCallback(drawChart);\n')
    f.write('function drawChart() {\n')


    f.write('var data = google.visualization.arrayToDataTable(\n')
    f.write(str(list_tally))
    f.write('\n);\n')


    f.write('var options = {\n')
    f.write('title: \'Error Report\',\n')
    f.write('is3D: true,\n')
    f.write('};\n')
    f.write('var chart = new google.visualization.PieChart(document.getElementById(\'piechart_3d\'));\n')
    f.write('chart.draw(data, options);\n')
    f.write('}\n')
    f.write('</script>\n')
    f.write('</head>\n')
    f.write('<body>\n')
    f.write('<div id="piechart_3d" style="width: 900px; height: 500px;"></div>\n')
    f.write('</body>\n')
    f.write('</html>\n')
    f.close()

def main():
    parser = argparse.ArgumentParser(description='Read the file')
    parser.add_argument('fileName', help='Input the filename which has to be read')
    args = parser.parse_args()
    fileName = args.fileName
    readFile(fileName)

if __name__ == '__main__':
    main()