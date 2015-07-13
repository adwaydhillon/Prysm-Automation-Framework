#!/usr/bin/env python
#title           :scrape_config.py
#description     :This will scrape a local YAML file for config details
#author          :Adway Dhillon
#date            :20150713
#version         :1.0.1
#usage           :python scrape_config.py [YAML_file_path]
#notes           :
#python_version  :Python 2.7.6
#==============================================================================

import argparse

def main():
	parser = argparse.ArgumentParser(description='Scrape the YAML config files')
	parser.add_argument('file_path', help='Input the path of the Simulation Environment Configuration')
	args = parser.parse_args()
	file_path = args.file_path
	scrape_file(file_path)

def scrape_file(file_path):
	details = {}
	
	with open(file_path) as f:
		content = f.readlines()
	f.close()

	for line in content:
		if line[0] != '#':
			if len(line.split(':', 1)) > 1:
				details[line.split(':', 1)[0]] = line.split(':', 1)[1]

	for each in details:
		print each + ": " + details[each] + "\n"


if __name__ == "__main__":
	main()