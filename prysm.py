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
        gen_html(header_row, table_data)

def gen_html(head_row, table_data):
    HTMLFILE = 'prysm_output.html'
    f = open(HTMLFILE, 'w')
    html_table = HTML.Table(table_data,
            header_row = head_row)
    html_table = str(html_table)
    f.write(html_table)
    f.write('<p>')
    f.close()


def main():
    parser = argparse.ArgumentParser(description='Read the file')
    parser.add_argument('fileName', help='Input the filename which has to be read')
    args = parser.parse_args()
    fileName = args.fileName
    readFile(fileName)

if __name__ == '__main__':
    main()