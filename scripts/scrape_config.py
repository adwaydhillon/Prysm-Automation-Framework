#!/usr/bin/env python
#title           :scrape_config.py
#description     :This will scrape a local YAML file for config details
#author          :Adway Dhillon
#date            :20150713
#version         :1.0.1
#usage           :python scrape_config.py [folder_path]
#notes           :
#python_version  :Python 2.7.6
#==============================================================================

import argparse

def main():
	parser = argparse.ArgumentParser(description='Scrape the YAML config files')
	parser.add_argument('simConfig_path', help='Input the path of the Simulation Environment Configuration')
	parser.add_argument('testConfig_path', help='Input the path of the Test Run Configuration')
	args = parser.parse_args()
	simConfig_path = args.simConfig_path
	args = parser.parse_args()
	testConfig_path = args.testConfig_path

def scrape_simConfig(simConfig_path):
	

if __name__ == "__main__":
	main()