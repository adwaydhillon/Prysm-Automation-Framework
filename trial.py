import HTML

# open an HTML file to show output in a browser
HTMLFILE = 'HTML_tutorial_output.html'
f = open(HTMLFILE, 'w')


#=== TABLES ===================================================================

table_data = [
        ['Last name',   'First name',   'Age'],
        ['Smith',       'John',         30],
        ['Carpenter',   'Jack',         47],
        ['Johnson',     'Paul',         62],
    ]

htmlcode = HTML.table(table_data)
print htmlcode
f.write(htmlcode)
f.write('<p>')
print '-'*79
		
#-------------------------------------------------------------------------------