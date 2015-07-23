#!/usr/bin/env python
#title           :test_selection.py
#description     :This will list the DV tests and suites in the project folder
#author          :Adway Dhillon
#date            :20150713
#version         :1.0.1
#usage           :python test_selection.py [project_path]
#notes           :
#python_version  :Python 2.7.6
#==============================================================================

import argparse, os, logging

def main():
	parser = argparse.ArgumentParser(description='list the DV tests and suites in the project folder')
	parser.add_argument('project_path', help='Input the path of the project')
	args = parser.parse_args()
	project_path = args.project_path
	scrape_dir(project_path)

def scrape_dir(proj_path):
	tests = []
	suites = []

	try:
		for folder in os.listdir(proj_path):
			if (folder == "DV"):
				path = proj_path + "/DV"
				for sub_folder in os.listdir(path):
					if sub_folder == "tests":
						for test in os.listdir(path + "/tests"):
							tests.append(test);
	except Exception, e:
		logging.error(str(e))

	try:
		for folder in os.listdir(proj_path):
			if (folder == "suites"):
				for suite in os.listdir(proj_path + "/suites"):
					suites.append(suite)

	except Exception, e:
		logging.error(str(e))

	# This is for temporary debugging
	for each in tests:
		print each + "\n"

	for each in suites:
		print each + "\n"

if __name__ == "__main__":
	main()