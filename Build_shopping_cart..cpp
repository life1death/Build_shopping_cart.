#include <iostream> 
#include <vector> 
		
using namespace std; 

// Class to represent an item in a shopping cart 
class Item 
{ 
	public: 
		string name; 
		int price; 
		int quantity; 
		
		Item(string name, int price, int quantity) 
		{ 
			this->name = name; 
			this->price = price; 
			this->quantity = quantity; 
		} 
}; 
	
// Class to represent a shopping cart 
class ShoppingCart 
{ 
	// vector of item objects 
	vector <Item> cart; 
	
	public: 
		// Function to fetch items from the cart 
		vector<Item> getItems() 
		{ 
			return cart; 
		} 
	
		void addItem(Item item) 
		{ 
			cart.push_back(item); 
		} 
	
		// Function to get total price of items 
		int getTotalPrice() 
		{ 
			int total = 0; 
		
			for (int i = 0; i < cart.size(); i++) 
				total += cart[i].price * cart[i].quantity; 
		
			return total; 
		} 
}; 

// Driver program to test above functions 
int main() 
{ 
	Item item1("Biscuits", 30, 5); 
	Item item2("Chocolate", 20, 3); 
	
	ShoppingCart cart; 
	
	cart.addItem(item1); 
	cart.addItem(item2); 
	
	vector<Item> items = cart.getItems(); 
	
	for (int i = 0; i < items.size(); i++) 
		cout << "Item: " << items[i].name << " Price: Rs." 
			<< items[i].price << " Quantity: " << items[i].quantity 
			<< endl; 
	
	cout << "Total Price: Rs. " << cart.getTotalPrice(); 
	
	return 0; 
}