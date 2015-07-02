import ar

def main():
	parser = argparse.ArgumentParser(description='Validate the project')
	parser.add_argument('proj_path', help='Input the path of the project to be validated')
	args = parser.parse_args()
	proj_path = args.proj_path

if __name__ == "__main__":
	main()