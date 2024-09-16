# Graph Management Library
This project focuses on creating a library for building and managing graphs, utilizing key software engineering principles to enhance code structure and maintainability.


## Project Overview
Our library models several classes to manage graph components:

-```CArc```: Represents an arc connecting two vertices. It contains attributes represented by strings, allowing flexibility to use either text or numeric identifiers for the vertices. This class provides methods to create, modify, and access information about an arc in the graph.

-```CSommet```: Represents a vertex in the graph. This class includes attributes like vertex identifiers and lists of incoming and outgoing arc pointers. It provides methods for accessing these attributes, as well as adding and removing arcs associated with a vertex.

-```CGraphOrient```: A generic class that manages directed graphs. It includes lists of vertices and arcs and provides methods to add, modify, or delete vertices and arcs, as well as reverse the graph. We decomposed some functions, like removing vertices, to promote code reuse and ensure memory management by handling allocation failures with exceptions.

-```CGraph```: Inherits from CGraphOrient and manages undirected graphs. It allows for the addition, modification, and deletion of vertices and arcs, and includes methods specific to undirected graph handling, such as adding or modifying an edge between two vertices.

-```AfficherGraph```: This class separates display logic from graph management, adhering to the single-responsibility principle, which improves code readability and reusability.

-```CException```: Handles error management to prevent interruptions in the program's execution. This class displays error messages, facilitating error handling during runtime.


## UML Diagram

![Capture d'écran 2024-09-16 215200](https://github.com/user-attachments/assets/27480bd0-a1fc-4451-9773-d125b3c37943)

## Use Case Diagram

![Capture d'écran 2024-09-16 215315](https://github.com/user-attachments/assets/dd4eada1-adcb-43d8-b0bf-22bb767d687e)

## User Manual

Adding a Vertex:
Use the method ```GRO_AjouterSommet(id: string)``` from the CGraphOrient class to add a new vertex to the graph by specifying its identifier.

Modifying a Vertex:
Use the method ```GRO_ModifierSommet(id: string, newid: string)``` from the CGraphOrient class to modify the identifier of an existing vertex in the graph.

Deleting a Vertex:
Use the method ```GRO_SuprimerSommet(id: string)``` from the CGraphOrient class to delete a vertex from the graph by specifying its identifier.
Adding an Edge:

Use the method ```GRO_AjouterArc(SommetDebut: string, SommetFin: string)``` from the CGraphOrient class or the method ```GRA_AjouterArcNonOriente(SommetDebut: string, SommetFin: string)``` from the CGraph class to add an undirected edge between two specified vertices.

Modifying an Edge:
To modify an edge, use the method ```GRO_ModifierArc(SommetDebut: string, SommetFin: string, newSommetDebut: string, newSommetFin: string)``` from the CGraphOrient class.

Deleting an Edge:
To delete an edge between two vertices, use the method ```GRO_SuprimerArc(SommetDebut: string, SommetFin: string)``` from the CGraphOrient class.
For an undirected edge, use the method GRA SuprimerArcNonOriente(SommetDebut: string, SommetFin: string) from the CGraph class.

## Executable Usage
When launching the executable, you must specify the path to the file containing the graph you want to display.

Note: If the file is located in the same directory as the ```.exe``` file, it is not necessary to provide the full path. Simply specifying the file name (e.g., ```Graphe.txt```) is sufficient.

![Capture d'écran 2024-09-16 215911](https://github.com/user-attachments/assets/1320ef1b-b906-4329-b254-a703cdcd806e)

![Capture d'écran 2024-09-16 215920](https://github.com/user-attachments/assets/1a97a772-ac4c-4d83-9d86-b217606f9ab4)

![Capture d'écran 2024-09-16 215930](https://github.com/user-attachments/assets/06e866c2-0101-48e5-a53d-1037ffdeec6b)

## Key Features
- ```Code Structure```: We adopted software engineering practices such as encapsulation and code reuse. For example, our graph deletion methods internally handle arc removal to prevent memory leaks.

- ```Error Handling```: The CException class ensures robust error handling, which helps manage exceptional cases and improves the overall quality of the project.

- ```Testing```: Throughout the development process, we conducted extensive testing across various scenarios, including edge cases, to validate functionality and ensure code quality.
