*Lab 2, OOP*

## The Simulation
I chose to do a Store Simulation. Usually in a shop people can cover different funtions, like cashier, security guard,helper and many others. Also, because buying things implies paying them, this leads to work with money. These are the main reasons I chose this simulation.

## Description
The main classes I declared are:
* Store
* Worker
* Item
* Customer
* Vending Machine

I created a store as an object, that has a name, year of opening and an introduction for when you enter it.

Next, I implemented 4 types of workers:
* Cashier
* Security Guard
* Fishmonger
* Ducher

All of them have first name, last name and age. They have a function from introduction, the cashier takes the payment, the sellers sell fish and meat and the guard has the role to check if you paid what you bought when you want to leave  the store.

Another main object is the *customer*.
The customer has a name, age, a balance and, if he paid for what he bought, he also receives a cheque. The basic operations he can perform are to check his balance, to chose the items he wants, to pay for what he bought, also to show his cheque if it is needed.

The *Item* class contains all the objects that can be bought from the store, either the main store or some particular seller. The items have name and price. You will pay for all of them at the cashier. 

Finally, *The Vending Machine* contains drink that have a name and a price. Compared to the main store, here you usually pay at the moment you selected the drink and you do not need to go to the cashier.

## Summary
In short, what this simulation does.
You are the customer and you go to the store. You can choose to check your balance, to buy something from the main store or the different sellers. You can also have a hot drink from the Vending Machine, where you will pay immediatly. Of course the sum will be extracted from your balance. You can check. Then, if you want to leave the store, firstly you will have to go to the cashier and eventually pay if you took some items. She will gave you a cheque. When you will try to go out of the store, the security guard will ask you to show the cheque. If your cheque does not say "Paid" you would not be able to leave the store. In the other case, the simulation will stop. 
