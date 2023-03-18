#include <memory>
#include <vector>
#include <iostream>


class Eternal
{
private:
	Eternal() {};
	static Eternal* instance_;
	

public:
	 static Eternal& instance()
	{
		if(instance_ == nullptr)
		{
			instance_ = new Eternal();
		}
		
		return *instance_;
	}
};

class EternalBox
{
private:
	EternalBox() {};
	static EternalBox* instance_;


public:
	

	static EternalBox& instance2(size_t size)
	{
		if (size < 5)
		{
			instance_ = new EternalBox();
			return *instance_;
		}

		
	}
	
};
EternalBox* EternalBox::instance_ = nullptr;



int main()
{
	

	std::vector <EternalBox> eternals[5];
	
	EternalBox one = EternalBox::instance2(eternals->size());
	eternals->push_back(one);
	EternalBox two = EternalBox::instance2(eternals->size());
	eternals->push_back(two);
	EternalBox three = EternalBox::instance2(eternals->size());
	eternals->push_back(three);
	EternalBox four = EternalBox::instance2(eternals->size());
	eternals->push_back(four);
	EternalBox five = EternalBox::instance2(eternals->size());
	eternals->push_back(five);
	//so this does work, its just that itll still let me shove an eternal box into the vector just fine, unfortunately.
	//So this *should* syore a pointer to garbage data 
	EternalBox six = EternalBox::instance2(eternals->size());
	eternals->push_back(six);
	
	

	
	
	
	
	
	std::cout << eternals->size();




}