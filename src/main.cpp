#include "ProblemSolver.hpp"
#include <cassert>
#include <cmath>
#include <cstdio>

void test_1();

void test_2();

void test_3();

int main() {
	test_1();
	test_2();
	test_3();
}

void test_1() {
	ProblemSolver p(
		1,
		{
			{0, 0, [](int) { return 0; }},
			{2, 3, [](int) { return 1; }},
		},
		{}
	);
	assert(p.solve() == 1);
	puts("pass test 1");
}

void test_2() {
	ProblemSolver p(
		3 ,
		{
			{0,0,[](int){ return 0;}},
			{-2,-2,[](int x){ return ( 2 ) * x * x + ( -6 ) * x + ( 8 );}},
			{-2,-2,[](int x){ return ( 7 ) * x * x + ( -9 ) * x + ( -2 );}},
			{-2,-2,[](int x){ return ( 2 ) * x * x + ( -4 ) * x + ( -5 );}},
		},
		{
			{{4,6,[](int x){ return ( 5 ) * x * x + ( 2 ) * x + ( 7 );}},2,1},
			{{1,9,[](int x){ return ( 9 ) * x * x + ( -10 ) * x + ( 3 );}},1,3},
			{{4,6,[](int x){ return ( 6 ) * x * x + ( -8 ) * x + ( -3 );}},2,3},
		}
	);
	Data ans = 241;
	Data res=p.solve();
	printf("res = %lf , ans = %lf\n",res,ans);
}

void test_3() {
	ProblemSolver p(
		3 ,
		{
			{0,0,[](int){ return 0;}},
			{-2,-2,[](int x){ return ( 1 ) * x * x + ( -1 ) * x + ( -2 );}},
			{-2,-2,[](int x){ return ( 2 ) * x * x + ( -8 ) * x + ( 4 );}},
			{-2,-2,[](int x){ return ( 4 ) * x * x + ( -4 ) * x + ( 4 );}},
		},
		{
			{{3,7,[](int x){ return ( 10 ) * x * x + ( -3 ) * x + ( -5 );}},2,3},
			{{-2,1,[](int x){ return ( 8 ) * x * x + ( 9 ) * x + ( 4 );}},1,3},
		}
	);
	Data ans = 140;
	Data res=p.solve();
	printf("res = %lf , ans = %lf\n",res,ans);
}
