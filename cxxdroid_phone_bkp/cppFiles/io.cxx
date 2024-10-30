//this function will read the number from the user

int readNum()
{
	int num;
	cout << "Enter a number : ";
	cin >> num;
	return num;
}

//following function simply write the answer
void writeAnswer()
{
	int answer = readNum() + readNum();
	cout << "The sum of entered number is  : " << answer << endl;
}
