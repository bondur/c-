/*
Какие ошибки содержаться в приведенных ниже фрагментах программ:
	a) Ошибка: case x>0
	int x;
	….
	switch (x)
		{
		  case 5: x++; break;
		  case x>0: x--; break;
		  default: x+=66;
	}
	b) верно
	int x;
	….
	switch (x)
		{
		  case 5: x+=7; break;
		  case 6: case 11: --x; break;
	}

	c) верно
	int x;
	….
	switch (x)
		{
		  case 5: x*=16;
		  case 6: case 11: x-=23; break;
	}
	d) Ошибка: switch(5)
	int x;
	….
	switch (5)
		{
		  case 5: x+=7; break;
		  case 6: case 11: --x; break;
	}
*/