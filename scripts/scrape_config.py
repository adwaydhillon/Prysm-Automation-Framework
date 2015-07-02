import argparse

def main():
	parser = argparse.ArgumentParser(description='Scrape the YAML config files')
	parser.add_argument('simConfig_path', help='Input the path of the Simulation Environment Configuration')
	parser.add_argument('testConfig_path', help='Input the path of the Test Run Configuration')
	args = parser.parse_args()
	simConfig_path = args.simConfig_path
	args = parser.parse_args()
	testConfig_path = args.testConfig_path

if __name__ == "__main__":
	main()