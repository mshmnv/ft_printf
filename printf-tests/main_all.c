/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbagg <lbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 11:32:36 by lbagg             #+#    #+#             */
/*   Updated: 2020/07/09 20:56:03 by lbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "libft/libft.h"

//not to forget add flags in makefile

int main()
{
	int myres;
	int res;

	myres = 0;
	
	printf("\n\t\t\tUSUAL CONVERSIONS\n\n");

 	printf("\t\t\tCHAR\n\n");

	myres = ft_printf("This is char: '%c'\n", 'c');
	res = printf("This is char: '%c'\n", 'c');
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("This is 0 char: '%c'\n", 0);
	res = printf("This is 0 char: '%c'\n", 0);
	printf("ft: %d\nor: %d\n\n", myres, res); 

	myres = ft_printf("%c", 0);
	res = printf("%c", 0);
	printf("ft: %d\nor: %d\n\n", myres, res);

/* ************************************************************************** */

 	printf("\t\t\tSTRING\n\n");

	myres = ft_printf("This is string: '%s'\n", "string");
	res = printf("This is string: '%s'\n", "string");
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("This is string: '%s'\n", "S");
	res = printf("This is string: '%s'\n", "S");
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("This is NULL string: '%s'\n", NULL);
	res = printf("This is NULL string: '%s'\n", NULL);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("This is 2 strings: '%s' '%s'\n", "", "str");
	res = printf("This is 2 strings: '%s' '%s'\n", "", "str");
	printf("ft: %d\nor: %d\n\n", myres, res); 
	
/* ************************************************************************** */

 	printf("\t\t\tDIGIT\n\n");
	
	myres = ft_printf("This is digit: %d\n", 15);
	res = printf("This is digit: %d\n", 15);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("This is digit: %d\n", -156);
	res = printf("This is digit: %d\n", -156);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("This is digit: %d\n", "string");
	res = printf("This is digit: %d\n", "string");
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("This is NULL digit: %d\n", NULL);
	res = printf("This is NULL digit: %d\n", NULL);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("This is min digit: %d\n", -2147483648);
	res = printf("This is min digit: %d\n", -2147483648);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("This is over max digit: %d\n", 214748364799);
	res = printf("This is over max digit: %d\n", 214748364799);
	printf("ft: %d\nor: %d\n\n", myres, res);

/* ************************************************************************** */

 	printf("\t\t\tINTEGER\n\n");

	myres = ft_printf("This is int: %i\n", 15);
	res = printf("This is int: %i\n", 15);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("This is int: %i\n", -156);
	res = printf("This is int: %i\n", -156);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("This is string int: %i\n", "string");
	res = printf("This is string int: %i\n", "string");
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("This is NULL int: %i\n", NULL);
	res = printf("This is NULL int: %i\n", NULL);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("This is min int: %i\n", -2147483648);
	res = printf("This is min int: %i\n", -2147483648);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("This is over max int: %i\n", 214748364799);
	res = printf("This is over max int: %i\n", 214748364799);
	printf("ft: %d\nor: %d\n\n", myres, res);

/* ************************************************************************** */
	
 	int i = 5;

 	printf("\t\t\tPOINTER\n\n");

	myres = ft_printf("This is pointer: %p\n", &i);
	res = printf("This is pointer: %p\n", &i);
	printf("ft: %d\nor: %d\n\n", myres, res);

 	myres = ft_printf("This is null pointer: %p\n", NULL);
	res = printf("This is null pointer: %p\n", NULL);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("This is pointer: %p\n", "str");
	res = printf("This is pointer: %p\n", "str");
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("This is digit pointer: %p\n", 100);
	res = printf("This is digit pointer: %p\n", 100);
	printf("ft: %d\nor: %d\n\n", myres, res);



/* ************************************************************************** */

 	printf("\t\t\tUNSIGNED\n\n");


	myres = ft_printf("This is unsigned: %u\n", 6);
	res = printf("This is unsigned: %u\n", 6);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("This is unsigned: %u\n", -6);
	res = printf("This is unsigned: %u\n", -6);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("This is max unsigned: %u\n", 4294967295);
	res = printf("This is max unsigned: %u\n", 4294967295);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("This is over max unsigned: %u\n", 4294967297);
	res = printf("This is over max unsigned: %u\n", 4294967297);
	printf("ft: %d\nor: %d\n\n", myres, res);

/* ************************************************************************** */

 	printf("\t\t\tHEX CONVERSION\n\n");

	myres = ft_printf("This is small hex conversion: %x\n", 555);
	res = printf("This is small hex conversion: %x\n", 555);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("This is 0 small hex conversion: %x\n", 0);
	res = printf("This is 0 small hex conversion: %x\n", 0);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("This is string big hex conversion: %X\n", "str");
	res = printf("This is string big hex conversion: %X\n", "str");
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("This is big hex conversion: %X\n", 555);
	res = printf("This is big hex conversion: %X\n", 555);
	printf("ft: %d\nor: %d\n\n", myres, res); 

/* ************************************************************************** */

  		printf("\t\t\tPERCENT\n\n");

	myres = ft_printf("This is percent: %%\n");
	res = printf("This is percent: %%\n");
	printf("ft: %d\nor: %d\n\n", myres, res);

	int j = 5;
	myres = ft_printf("All conversions: %c %s %p %d %i %u %x %X %%\n", 'c', "string", &j, 166, 166, 166, 155, 155);
	res = printf("All conversions: %c %s %p %d %i %u %x %X %%\n", 'c', "string", &j, 166, 166, 166, 155, 155);
	printf("ft: %d\nor: %d\n\n", myres, res);  


/* ************************************************************************** */

	  	printf("\t\t\tWIDTH\n\n");

 	myres = ft_printf("This is 0 char: '%5c'\n", 0);
	res = printf("This is 0 char: '%5c'\n", 0);			
	printf("ft: %d\nor: %d\n\n", myres, res); 

	myres = ft_printf("This is 0 char: '%0c'\n", 0);		
	res = printf("This is 0 char: '%0c'\n", 0);
	printf("ft: %d\nor: %d\n\n", myres, res); 

	myres = ft_printf("'%1c'\n", 'g');
	res = printf("'%1c'\n", 'g');
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%6c'\n", 'g');
	res = printf("'%6c'\n", 'g');
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%1s'\n", "string");
	res = printf("'%1s'\n", "string");
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%10s'\n", "string");
	res = printf("'%10s'\n", "string");
	printf("ft: %d\nor: %d\n\n", myres, res);

	int k = 8;
	myres = ft_printf("%15p\n", &k);
	res = printf("%15p\n", &k);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("%1p\n", &k);
	res = printf("%1p\n", &k);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("%1u\n", 6);
	res = printf("%1u\n", 6);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("%5u\n", 6);
	res = printf("%5u\n", 6);
	printf("ft: %d\nor: %d\n\n", myres, res);
	
	myres = ft_printf("%15u\n", -6);
	res = printf("%15u\n", -6);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("%15x\n", 666);
	res = printf("%15x\n", 666);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("%1X\n", 106);
	res = printf("%1X\n", 106);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("%15X\n", -373773);
	res = printf("%15X\n", -373773);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("%25%\n");
	res = printf("%25%\n");
	printf("ft: %d\nor: %d\n\n", myres, res); 

	int n = 5;
	myres = ft_printf("All conversions: %3c %5s %18p %5d %3i %5u %5x %5X %5%\n", 'c', "string", &n, 166, 166, 166, 155, 155);
	res = printf("All conversions: %3c %5s %18p %5d %3i %5u %5x %5X %5%\n", 'c', "string", &n, 166, 166, 166, 155, 155);
	printf("ft: %d\nor: %d\n\n", myres, res);  

/* ************************************************************************** */

	   	printf("\t\t\tFLAGS\n\n");
	
		printf("\t\t\tminus flag\n");

	myres = ft_printf("'%-15d'\n", 5);
	res = printf("'%-15d'\n", 5);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%-10c'\n", 'g');
	res = printf("'%-10c'\n", 'g');
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%-10c'\n", 0);
	res = printf("'%-10c'\n", 0);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%-10s'\n", "string");
	res = printf("'%-10s'\n", "string");
	printf("ft: %d\nor: %d\n\n", myres, res);

	int s = 8;
	myres = ft_printf("'%-20p'\n", &s);
	res = printf("'%-20p'\n", &s);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%20-d'\n", 5);
	res = printf("'%20-d'\n", 5);
	printf("ft: %d\nor: %d\n\n", myres, res);

/* ************************************************************************** */

		printf("\t\t\tnull flag\n");

	myres = ft_printf("'%010d'\n", 5);
	res = printf("'%010d'\n", 5);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%010c'\n", 'g');
	res = printf("'%010c'\n", 'g');
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%010s'\n", "string");
	res = printf("'%010s'\n", "string");
	printf("ft: %d\nor: %d\n\n", myres, res);

	int t = 8;
	myres = ft_printf("'%020p'\n", &t);
	res = printf("'%020p'\n", &t);
	printf("ft: %d\nor: %d\n\n", myres, res);

	int g = 8;
	myres = ft_printf("'%020-p'\n", &g);
	res = printf("'%020-p'\n", &g);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%-010s'\n", "string");
	res = printf("'%-010s'\n", "string");
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%0-10s'\n", "string");
	res = printf("'%0-10s'\n", "string");
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%0-010-010s'\n", "string");
	res = printf("'%0-010-010s'\n", "string");
	printf("ft: %d\nor: %d\n\n", myres, res);

/* ************************************************************************** */

 		printf("\t\t\tasteriks flag\n");

	myres = ft_printf("'%*d'\n", 10, 555);
	res = printf("'%*d'\n", 10, 555);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%15*d'\n", 10, 555);
	res = printf("'%15*d'\n", 10, 555);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%*15d'\n", 10, 555);
	res = printf("'%*15d'\n", 10, 555);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%*15*d'\n", 10, 20,555);
	res = printf("'%*15*d'\n", 10, 20, 555);
	printf("ft: %d\nor: %d\n\n", myres, res);

 	myres = ft_printf("'%*d'\n", -10, 555);
	res = printf("'%*d'\n", -10, 555);
	printf("ft: %d\nor: %d\n\n", myres, res); 

	myres = ft_printf("'%*0d'\n", 10, 555);
 	res = printf("'%*0d'\n", 10, 555);
	printf("ft: %d\nor: %d\n\n", myres, res);

	int a = 1000;
	myres = ft_printf("'%0*p'\n", 17, &a);
	res = printf("'%0*p'\n", 17, &a);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%-*d'\n", 10, 555);
	res = printf("'%-*d'\n", 10, 555);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%***-d'\n", 10, 15, 20, 555);
	res = printf("'%***-d'\n", 10, 15, 20, 555);
	printf("ft: %d\nor: %d\n\n", myres, res); 

/* ************************************************************************** */

  		printf("\t\t\tprecision flag\n");


	myres = ft_printf("'%.0d'\n", 5);
	res = printf("'%.0d'\n", 5);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%.0d'\n", 0);
	res = printf("'%.0d'\n", 0);
	printf("ft: %d\nor: %d\n\n", myres, res);


	myres = ft_printf("'%.5c'\n", 'g');
	res = printf("'%.5c'\n", 'g');
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%.0c'\n", 'g');
	res = printf("'%.0c'\n", 'g');
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%.0d'\n", 5);
	res = printf("'%.0d'\n", 5);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%.5d'\n", 5);
	res = printf("'%.5d'\n", 5);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%.d'\n", 4);
	res = printf("'%.d'\n", 4);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%.d'\n", 0);
	res = printf("'%.d'\n", 0);
	printf("ft: %d\nor: %d\n\n", myres, res);

	int e = 8;
	myres = ft_printf("'%.20p'\n", &e);
	res = printf("'%.20p'\n", &e);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%.p'\n", 0);
	res = printf("'%.p'\n", 0);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%.p'\n", NULL);
	res = printf("'%.p'\n", NULL);
	printf("ft: %d\nor: %d\n\n", myres, res);

	int r = 8;
	myres = ft_printf("'%.4p'\n", &r);
	res = printf("'%.4p'\n", &r);
	printf("ft: %d\nor: %d\n\n", myres, res);
 	
 	myres = ft_printf("'%.15s'\n", "string");  
	res = printf("'%.15s'\n", "string");
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%.1s'\n", "string");
	res = printf("'%.1s'\n", "string");
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%.0s'\n", "string");
	res = printf("'%.0s'\n", "string");
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%.2s'\n", "string");
	res = printf("'%.2s'\n", "string");
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%.1s'\n", NULL);
	res = printf("'%.1s'\n", NULL);
	printf("ft: %d\nor: %d\n\n", myres, res); 

	myres = ft_printf("'%.7s'\n", NULL);
	res = printf("'%.7s'\n", NULL);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%.6d'\n", -3);
	res = printf("'%.6d'\n", -3);
	printf("ft: %d\nor: %d\n\n", myres, res);	

	myres = ft_printf("'%8.5d'\n", 34);
	res = printf("'%8.5d'\n", 34);
	printf("ft: %d\nor: %d\n\n", myres, res);	

	myres = ft_printf("'%10.5d'\n", -216);
	res = printf("'%10.5d'\n", -216);
	printf("ft: %d\nor: %d\n\n", myres, res);	

	myres = ft_printf("'%8.5d'\n", 0);
	res = printf("'%8.5d'\n", 0);
	printf("ft: %d\nor: %d\n\n", myres, res); 
	
/* ************************************************************************** */

 	 	printf("\t\t\ta lot of flags\n");

	myres = ft_printf("'%06.1d'\n", 15);
	res = printf("'%06.1d'\n", 15);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%6.1d'\n", 15);
	res = printf("'%6.1d'\n", 15);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%06d'\n", 15);
	res = printf("'%06d'\n", 15);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%06.1c'\n", 'g');
	res = printf("'%06.1c'\n", 'g');
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%04.1s'\n", "string");  
	res = printf("'%04.1s'\n", "string");
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%04.1*s'\n", 2, "string");
	res = printf("'%04.1*s'\n", 2, "string");
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%04.1*s'\n", 5, "string");
	res = printf("'%04.1*s'\n", 5, "string");
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%4*.1s'\n", 6, "string");	
	res = printf("'%4*.1s'\n", 6, "string");
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%-4*.1s'\n", 6, "string");
	res = printf("'%-4*.1s'\n", 6, "string");
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%-06d'\n", 15);
	res = printf("'%-06d'\n", 15);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%-06.1c'\n", 'g');
	res = printf("'%-06.1c'\n", 'g');
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%7.5s'\n", "yolo"); 
	res = printf("'%7.5s'\n", "yolo");
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%-7d'\n", -15);
	res = printf("'%-7d'\n", -15);
	printf("ft: %d\nor: %d\n\n", myres, res);
	
	myres = ft_printf("'%07d'\n", -15);
	res = printf("'%07d'\n", -15);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%-10.5d'\n", -216);
	res = printf("'%-10.5d'\n", -216);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%-8.5d'\n", 34);
	res = printf("'%-8.5d'\n", 34);
	printf("ft: %d\nor: %d\n\n", myres, res);

	int f = 8;
	myres = ft_printf("'%30.20p'\n", &f);
	res = printf("'%30.20p'\n", &f);
	printf("ft: %d\nor: %d\n\n", myres, res);

	//int f = 8;
	myres = ft_printf("'%-30.20p'\n", &f);
	res = printf("'%-30.20p'\n", &f);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%10.5d'\n", -216);
	res = printf("'%10.5d'\n", -216);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%.*i'\n", 6, -3);
	res = printf("'%.*i'\n", 6, -3);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%.6i'\n", -3);
	res = printf("'%.6i'\n", -3);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%0*i'\n", -7, -54);				
	res = printf("'%0*i'\n", -7, -54);
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%.*s'\n", 3, "hello");
	res = printf("'%.*s'\n", 3, "hello");
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%.3s'\n", "hello");  
	res = printf("'%.3s'\n", "hello");
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%-*.*s'\n", 7, 3, "yolo");
	res = printf("'%-*.*s'\n", 7, 3, "yolo");
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%.*s'\n", -3, "hello"); 
	res = printf("'%.*s'\n", -3, "hello");
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%.*s'\n", -3, 0); 
	res = printf("'%.*s'\n", -3, 0);
	printf("ft: %d\nor: %d\n\n", myres, res);

/* ************************************************************************** */

		  	printf("\t\t\tundefined behavior\n");
	
	myres = ft_printf("'%'\n");
	res = printf("'%'\n");
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%Z'\n");
	res = printf("'%Z'\n");
	printf("ft: %d\nor: %d\n\n", myres, res);

	myres = ft_printf("'%%%'\n", "test");
	res = printf("'%%%'\n", "test");
	printf("ft: %d\nor: %d\n\n", myres, res);

	return (0);
}
