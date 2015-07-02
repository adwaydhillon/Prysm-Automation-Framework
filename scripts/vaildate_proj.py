import argparse
import os

def is_valid(proj_path):
	dir = set()
	for folder in os.listdir(proj_path):
		dir.add(folder)
	if ("DV" in dir):
		DV_dir = set()
		for folder in os.listdir(proj_path + "/DV"):
			DV_dir.add(folder)
		if ("TB" not in DV_dir):
			print "'TB' not found in 'DV' folder"
			return False
		if ("tests" not in DV_dir):
			print "'tests' not found in 'DV' folder"
			return False
	else:
		print "'DV' folder not found"
		return False

	if ("sim_env_scripts" in dir):
		scripts_dir = set()
		for folder in os.listdir(proj_path + "/sim_env_scripts"):
			scripts_dir.add(folder)
		if ("errorHandling.py" not in scripts_dir):
			print "'errorHandling.py' not found in 'sim_env_scripts' folder"
			return False
		if ("fileIO.py" not in scripts_dir):
			print "'fileIO.py' not found in 'sim_env_scripts' folder"
			return False
		if ("global_init.py" not in scripts_dir):
			print "'global_init.py' not found in 'sim_env_scripts' folder"
			return False
		if ("prepare.py" not in scripts_dir):
			print "'prepare.py' not found in 'sim_env_scripts' folder"
			return False
		if ("reportGen.py" not in scripts_dir):
			print "'reportGen.py' not found in 'sim_env_scripts' folder"
			return False
		if ("run.py" not in scripts_dir):
			print "'run.py' not found in 'sim_env_scripts' folder"
			return False
		if ("simulator.py" not in scripts_dir):
			print "'simulator.py' not found in 'sim_env_scripts' folder"
			return False
	else:
		print "'sim_env_scripts' folder not found"
		return False


	if ("simEnvConfig.yaml" not in dir):
		print "'simEnvConfig.yaml' not found"
		return False

	if ("suites" not in dir):
		print "'suites' folder not found"
		return False

	if ("TB_scripts" not in dir):
		print "'TB_scripts' folder not found"
		return False

	if ("testRunConfig.yaml" not in dir):
		print "'testRunConfig.yaml' not found"
		return False

	if ("Tool_scripts" not in dir):
		print "'Tool_scripts' folder not found"
		return False

	return True

def main():
	parser = argparse.ArgumentParser(description='Validate the project')
   	parser.add_argument('proj_path', help='Input the path of the project to be validated')
   	args = parser.parse_args()
   	proj_path = args.proj_path
   	is_valid(proj_path)

if __name__ == "__main__":
	main()