#!/usr/bin/env python
#title           :validate_proj.py
#description     :This will perform a validation check on a local project folder according to some given requirements.
#author          :Adway Dhillon
#date            :20150707
#version         :1.0.1
#usage           :python validate_proj.py [folder_path]
#notes           :
#python_version  :Python 2.7.6
#==============================================================================

import argparse, os, logging

def is_valid(proj_path):
	dirs = set()
	try:
		for folder in os.listdir(proj_path):
			dirs.add(folder)
	except Exception, e:
		logging.error(str(e))
		return False

	if ("DV" in dirs):
		DV_dirs = set()
		try:
			for folder in os.listdir(proj_path + "/DV"):
				DV_dirs.add(folder)
		except Exception, e:
			logging.error(str(e))
			return False

		if ("TB" not in DV_dirs):
			print "'TB' not found in 'DV' folder"
			return False
		if ("tests" not in DV_dirs):
			print "'tests' not found in 'DV' folder"
			return False

	else:
		print "'DV' folder not found"
		return False

	if ("sim_env_scripts" in dirs):
		scripts_dirs = set()
		try:
			for folder in os.listdir(proj_path + "/sim_env_scripts"):
				scripts_dirs.add(folder)
		except Exception, e:
			logging.error(str(e))
			return False

		if ("errorHandling.py" not in scripts_dirs):
			print "'errorHandling.py' not found in 'sim_env_scripts' folder"
			return False
		if ("fileIO.py" not in scripts_dirs):
			print "'fileIO.py' not found in 'sim_env_scripts' folder"
			return False
		if ("global_init.py" not in scripts_dirs):
			print "'global_init.py' not found in 'sim_env_scripts' folder"
			return False
		if ("prepare.py" not in scripts_dirs):
			print "'prepare.py' not found in 'sim_env_scripts' folder"
			return False
		if ("reportGen.py" not in scripts_dirs):
			print "'reportGen.py' not found in 'sim_env_scripts' folder"
			return False
		if ("run.py" not in scripts_dirs):
			print "'run.py' not found in 'sim_env_scripts' folder"
			return False
		if ("simulator.py" not in scripts_dirs):
			print "'simulator.py' not found in 'sim_env_scripts' folder"
			return False

	else:
		print "'sim_env_scripts' folder not found"
		return False

	if ("simEnvConfig.yaml" not in dirs):
		print "'simEnvConfig.yaml' not found"
		return False

	if ("suites" not in dirs):
		print "'suites' folder not found"
		return False

	if ("TB_scripts" not in dirs):
		print "'TB_scripts' folder not found"
		return False

	if ("testRunConfig.yaml" not in dirs):
		print "'testRunConfig.yaml' not found"
		return False

	if ("Tool_scripts" not in dirs):
		print "'Tool_scripts' folder not found"
		return False

	print "validated"
	return True

def main():
	parser = argparse.ArgumentParser(description='Validate the project')
   	parser.add_argument('proj_path', help='Input the path of the project to be validated')
   	args = parser.parse_args()
   	proj_path = args.proj_path
   	is_valid(proj_path)

if __name__ == "__main__":
	main()