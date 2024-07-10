#include <iostream>
#include <cassert>
#include <array>

class Stack
{
    private:
        std::array<int, 10> m_array;
        std::array<int,10>::size_type m_next_index{0};
    public:
        void reset()
        {
            m_next_index = 0;
        }

        bool push(int value)
        {
            if (m_next_index == m_array.size())
                return false;

            m_array[m_next_index++] = value;
            return true;
        }

        int pop()
        {
            assert(m_next_index > 0 && "Can not pop empty stack");
            
            return m_array[--m_next_index];
        }

        void print()
        {
            std::cout << "(";
            for (std::size_t i{0}; i < m_next_index; ++i)
            {
                std::cout << m_array[i] << ' ';
            }
            std::cout << ")\n";
        }
};

int main()
{
	Stack stack;
 
	stack.print();
 
	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();
 
	stack.pop();
	stack.print();
 
	stack.reset();
	stack.print();
 
	return 0;
}