import argparse
import os

def validate(proj_path):
	for i in os.listdir(os.getcwd()):
		print i

def main():
	parser = argparse.ArgumentParser(description='Validate the project')
   	parser.add_argument('proj_path', help='Input the path of the project to be validated')
   	args = parser.parse_args()
   	proj_path = args.proj_path
   	validate(proj_path)

if __name__ == "__main__":
	main()