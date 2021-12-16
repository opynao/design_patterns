# design_patterns

### Chain of Responsibility
Chain of Responsibility is a behavioral design pattern that lets you pass requests along a chain of handlers.
Upon receiving a request, each handler decides either to process the request or to pass it to the next handler in the chain.
In creds_validator I used chain of responsibility pattern to create different validators of user credentials.

### Factory Method

Factory Method is a creational design pattern that provides an interface for creating objects in a superclass, but allows subclasses to alter the type of objects that will be created.
I used Factory method to create different types of pizza with several ingredients.

### Command

Command is a behavioral design pattern that turns a request into a stand-alone object that contains all information about the request. 
This transformation lets you pass requests as a method arguments, delay or queue a request’s execution, and support undoable operations.
I used Command pattern in graphic redactor to create buttons that are responsible for executing different commands.

### Observer

Observer is a behavioral design pattern that lets you define a subscription mechanism to notify multiple objects about any events that happen to the object they’re observing.
I used pattern observer to create display which subscribes to the events from different weather sensors (temperature, humidity...).

### Decorator

Decorator is a structural design pattern that lets you attach new behaviors to objects by placing these objects inside special wrapper objects that contain the behaviors.
I used decorator to create class-wrappers and transform data into the packet according to TCP/IP protocol.

### Mediator
Mediator is a behavioral design pattern that lets you reduce chaotic dependencies between objects. The pattern restricts direct communications 
between the objects and forces them to collaborate only via a mediator object.
I used mediator to create user interface changing according to the user answers.
