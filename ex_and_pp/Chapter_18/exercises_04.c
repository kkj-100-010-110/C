int f(int i)
{
	static int j = 0;
	return i * j++;
}

/*
What will be the value of f(10) if f has never been called before?
-> 0
What will be the value of f(10) if f has been called five times previously?
-> 50
*/
