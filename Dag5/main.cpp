#include <iostream>

unsigned long const HEIGHT = 8;
unsigned long const STACKS = 9;

char stacks[HEIGHT][STACKS] =
{
	{'F',   0,   0, 'L',   0, 'M',   0,   0,   0},
	{'T',   0, 'H', 'V', 'G', 'V',   0,   0,   0},
	{'N',   0, 'T', 'D', 'R', 'N',   0, 'D',   0},
	{'Z',   0, 'B', 'C', 'P', 'B', 'R', 'Z',   0},
	{'M',   0, 'J', 'N', 'M', 'F', 'M', 'V', 'H'},
	{'G', 'J', 'L', 'J', 'S', 'C', 'G', 'M', 'F'},
	{'H', 'W', 'V', 'P', 'W', 'H', 'H', 'N', 'N'},
	{'J', 'V', 'G', 'B', 'F', 'G', 'D', 'H', 'G'},
};

unsigned long move_from_to[] =
{
6,4,3,
5,8,9,
1,4,5,
1,4,5,
2,2,7,
2,1,6,
9,6,1,
12,3,5,
1,8,4,
3,1,5,
1,6,7,
10,5,2,
14,5,1,
8,7,9,
11,2,9,
1,3,9,
11,1,5,
2,1,9,
1,4,8,
6,1,5,
1,8,3,
16,5,1,
4,1,3,
1,5,6,
4,3,4,
1,6,7,
21,9,6,
2,1,9,
2,4,9,
5,9,4,
9,1,6,
6,4,6,
1,6,2,
1,7,6,
1,3,2,
8,6,9,
3,1,8,
1,2,1,
13,6,3,
1,1,9,
2,1,6,
3,8,4,
4,4,9,
3,1,3,
22,9,8,
1,2,9,
6,8,9,
15,6,5,
5,8,9,
11,9,8,
13,5,1,
1,6,5,
1,9,3,
21,8,3,
3,5,3,
11,1,2,
25,3,1,
5,1,7,
20,1,7,
1,6,7,
16,3,9,
8,9,6,
1,1,5,
5,9,4,
2,2,1,
2,9,4,
1,9,4,
1,8,4,
1,5,2,
3,4,6,
1,4,7,
9,7,6,
5,4,6,
7,7,2,
1,1,6,
11,2,5,
10,5,1,
1,6,8,
1,5,7,
24,6,1,
12,1,4,
12,4,8,
2,2,7,
3,7,2,
5,2,8,
9,8,9,
9,8,5,
1,9,1,
14,1,8,
11,7,9,
4,1,3,
7,1,2,
3,3,7,
12,9,7,
8,7,2,
4,9,2,
1,3,6,
5,5,9,
14,2,1,
8,9,4,
6,4,5,
5,5,7,
1,8,2,
2,4,6,
4,7,3,
10,8,4,
2,3,6,
7,7,6,
10,4,8,
5,1,6,
8,2,1,
7,6,8,
9,6,5,
16,1,6,
2,3,9,
1,7,4,
2,9,1,
14,6,7,
1,6,3,
2,6,3,
9,5,7,
3,1,6,
3,3,7,
5,5,9,
3,6,2,
1,6,2,
12,8,2,
5,2,1,
2,1,3,
25,7,1,
1,4,6,
2,3,9,
26,1,9,
2,1,8,
1,6,8,
1,7,1,
7,8,1,
7,1,5,
1,1,2,
2,8,6,
32,9,8,
1,6,5,
5,2,9,
1,9,7,
24,8,3,
1,6,9,
3,2,5,
1,7,9,
4,9,3,
8,8,7,
18,3,7,
20,7,8,
6,8,9,
6,5,1,
8,9,4,
3,5,4,
8,8,4,
2,5,2,
3,1,5,
4,3,7,
6,2,9,
3,3,6,
6,4,5,
2,6,3,
1,3,1,
4,3,8,
8,4,3,
4,3,7,
4,4,5,
4,9,5,
3,3,4,
3,4,9,
1,1,4,
2,1,5,
7,7,8,
4,7,4,
1,6,7,
1,1,5,
1,3,8,
11,5,9,
17,9,8,
13,8,4,
1,4,8,
4,7,1,
4,8,3,
6,5,4,
3,3,6,
2,1,9,
1,9,5,
1,3,5,
5,5,9,
2,1,8,
21,8,6,
2,8,4,
4,9,6,
1,9,7,
19,4,1,
28,6,5,
7,4,2,
28,5,3,
1,9,4,
1,4,2,
1,7,8,
1,8,9,
13,1,3,
8,2,8,
3,1,2,
5,8,5,
1,2,7,
1,9,7,
1,2,3,
2,7,9,
1,2,6,
1,9,1,
9,3,9,
3,9,1,
1,6,8,
21,3,7,
7,9,4,
2,4,2,
1,8,6,
7,1,4,
7,7,8,
4,5,9,
10,7,1,
7,3,9,
1,7,9,
1,5,3,
3,3,5,
10,4,2,
1,3,7,
2,4,9,
3,9,1,
3,7,1,
1,6,4,
1,1,2,
1,3,4,
2,4,3,
1,7,4,
4,8,9,
1,4,9,
3,1,9,
12,1,7,
2,9,5,
12,9,7,
5,5,1,
1,8,5,
4,1,4,
1,9,6,
1,3,4,
3,8,3,
1,1,7,
8,2,5,
2,8,1,
10,7,1,
4,9,5,
2,5,8,
11,5,4,
6,7,2,
2,2,1,
1,7,5,
1,5,1,
2,4,8,
1,6,9,
8,4,3,
8,1,7,
7,1,2,
4,3,9,
1,9,6,
7,2,1,
5,2,3,
2,7,8,
5,8,4,
2,9,3,
1,8,1,
6,3,5,
10,3,1,
3,5,3,
3,2,1,
1,5,4,
6,4,5,
1,6,2,
3,4,7,
1,9,4,
2,3,1,
1,9,8,
1,3,7,
4,4,8,
2,7,4,
8,5,9,
2,8,6,
2,4,3,
2,3,4,
4,9,7,
1,8,7,
2,6,9,
2,8,9,
1,2,9,
1,7,8,
1,2,7,
19,7,6,
1,8,1,
2,4,8,
5,6,1,
2,7,2,
2,2,8,
2,1,8,
4,8,2,
3,2,8,
6,9,5,
8,6,3,
26,1,6,
1,5,3,
1,1,5,
8,3,1,
1,3,7,
3,9,2,
4,2,6,
26,6,1,
1,7,5,
3,8,4,
2,8,2,
7,1,2,
1,5,9,
2,4,6,
9,6,2,
18,1,7,
6,7,1,
6,5,6,
1,1,2,
19,2,7,
1,4,2,
9,7,1,
3,6,7,
1,9,4,
1,2,3,
8,7,8,
4,6,5,
2,6,3,
1,4,2,
4,5,1,
8,8,7,
17,7,8,
3,3,1,
1,2,8,
8,8,4,
8,8,7,
1,8,2,
7,7,6,
1,2,7,
5,7,8,
7,1,6,
10,6,1,
4,7,9,
3,9,7,
1,7,2,
6,4,2,
7,1,5,
4,2,5,
16,1,9,
3,2,7,
2,4,9,
4,1,6,
5,7,4,
4,6,3,
1,7,4,
1,6,9,
1,8,5,
4,3,2,
2,5,3,
3,6,2,
3,2,1,
9,5,8,
1,3,1,
10,8,1,
1,8,5,
16,9,2,
1,3,2,
12,1,9,
1,9,2,
3,1,6,
2,1,9,
3,6,8,
20,2,7,
16,9,7,
1,7,5,
2,5,9,
2,2,3,
2,8,5,
3,9,7,
2,5,2,
1,4,6,
2,1,4,
23,7,5,
4,8,5,
7,7,1,
16,5,7,
1,6,5,
1,2,4,
2,3,9,
1,2,3,
13,5,1,
1,3,8,
1,9,4,
19,1,9,
2,1,9,
22,9,8,
14,8,5,
12,5,3,
21,7,9,
14,9,7,
1,8,6,
9,3,7,
1,3,2,
4,4,1,
1,2,4,
1,3,9,
6,8,9,
4,1,7,
2,5,9,
6,4,5,
4,7,4,
1,5,3,
5,9,7,
2,3,1,
6,9,6,
1,1,6,
2,4,2,
8,7,5,
20,7,5,
2,5,6,
4,9,5,
1,1,3,
1,3,4,
1,2,7,
1,4,9,
9,6,3,
2,4,3,
28,5,3,
1,8,3,
1,8,1,
1,2,8,
1,6,2,
1,8,1,
6,5,7,
1,5,1,
1,9,2,
1,1,3,
1,9,7,
2,1,2,
11,3,8,
3,8,6,
3,6,9,
25,3,7,
4,3,8,
4,2,3,
9,8,9,
2,3,7,
3,8,2,
11,9,7,
1,9,1,
4,7,3,
1,1,5,
23,7,2,
12,2,3,
2,3,9,
12,2,1,
2,3,9,
1,5,4,
1,2,5,
1,9,4,
1,5,9,
2,4,2,
3,1,4,
1,2,1,
10,3,2,
7,7,3,
11,7,9,
5,3,1,
1,4,5,
11,2,3,
9,9,3,
3,9,4,
2,4,8,
1,5,6,
13,1,5,
3,3,8,
3,7,2,
1,7,4,
3,8,3,
8,3,8,
4,4,5,
2,8,2,
8,8,3,
1,6,3,
2,2,8,
6,5,2,
3,2,8,
1,1,7,
2,9,3,
3,5,4,
2,8,6,
};

#include <cassert>
#include <vector>

class Crate
{
private:
	unsigned long d_stack;
	char d_label;
	
public:
	Crate() noexcept
	: d_stack{0}, d_label{0}
	{
	
	}
	
	Crate(unsigned long s, char l) noexcept
	: d_stack{s}, d_label{l}
	{
	
	}
	
	Crate(Crate const &) noexcept = default;
	Crate(Crate &&) noexcept = default;
	
	Crate & operator = (Crate const &) noexcept = default;
	Crate & operator = (Crate &&) noexcept = default;
	
	void invalidate() noexcept
	{
		d_stack = 0;
	}
	
	[[nodiscard]]
	unsigned long get_stack() const noexcept
	{
		return d_stack;
	}
	
	[[nodiscard]]
	char get_label() const noexcept
	{
		return d_label;
	}
};

using Crates = std::vector<Crate>;

Crates::reverse_iterator find_first_crate(Crates & crates, unsigned long stack)
{
	auto pos = std::find_if(crates.rbegin(), crates.rend(), [stack](Crate const & c)
	{
		return c.get_stack() == stack;
	});
	assert(pos != crates.rend());
	return pos;
}

void init(Crates & crates)
{
	for(unsigned long stack = 0; stack < STACKS; ++stack)
	{
		for(unsigned long crate = HEIGHT; crate-- > 0; crate)
		{
			if(auto label = stacks[crate][stack])
			{
				crates.emplace_back(stack + 1, label);
			}
		}
	}
}

void part1()
{
	unsigned long const MOVES = sizeof(move_from_to) / sizeof(unsigned long);
	
	Crates crates;
	crates.reserve(STACKS * HEIGHT + MOVES);
	init(crates);
	
	unsigned long move = 0;
	
	while(move < MOVES)
	{
		auto number_of_crates_to_move = move_from_to[move++];
		auto from_stack = move_from_to[move++];
		auto to_stack = move_from_to[move++];
		
		while(number_of_crates_to_move--)
		{
			auto pos = find_first_crate(crates, from_stack);
			pos->invalidate();
			crates.emplace_back(to_stack, pos->get_label());
		}
	}
	
	for(unsigned long i = 0; i < STACKS; ++i)
	{
		auto pos = find_first_crate(crates, i+1);
		std::cout << pos->get_label();
	}
	
	std::cout << "\n";
}

void part2()
{
	unsigned long const MOVES = sizeof(move_from_to) / sizeof(unsigned long);
	
	Crates crates;
	crates.reserve(STACKS * HEIGHT + MOVES);
	init(crates);
	
	unsigned long move = 0;
	
	while(move < MOVES)
	{
		auto number_of_crates_to_move = move_from_to[move++];
		auto from_stack = move_from_to[move++];
		auto to_stack = move_from_to[move++];
		
		Crates move_stack;
		
		while(number_of_crates_to_move--)
		{
			auto pos = find_first_crate(crates, from_stack);
			pos->invalidate();
			move_stack.emplace_back(to_stack, pos->get_label());
		}
		
		crates.insert(crates.end(), move_stack.rbegin(), move_stack.rend());
	}
	
	for(unsigned long i = 0; i < STACKS; ++i)
	{
		auto pos = find_first_crate(crates, i+1);
		std::cout << pos->get_label();
	}
	
	std::cout << "\n";
}

int main()
{
	std::cout << "------PART 1\n";
	part1();
	std::cout << "------PART 2\n";
	part2();
	
	return 0;
}
