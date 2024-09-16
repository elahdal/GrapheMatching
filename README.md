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

![Capture d'écran 2024-09-16 215930](https://github.com/user-attachments/assets/06e866c2-0101-48e5-a53d-1037ffdeec6b)
![Capture d'écran 2024-09-16 215920](https://github.com/user-attachments/assets/1a97a772-ac4c-4d83-9d86-b217606f9ab4)
![Capture d'écran 2024-09-16 215911](https://github.com/user-attachments/assets/1320ef1b-b906-4329-b254-a703cdcd806e)

Already a pro? Just edit this README.md and make it your own. Want to make it easy? [Use the template at the bottom](#editing-this-readme)!

## Add your files

- [ ] [Create](https://docs.gitlab.com/ee/user/project/repository/web_editor.html#create-a-file) or [upload](https://docs.gitlab.com/ee/user/project/repository/web_editor.html#upload-a-file) files
- [ ] [Add files using the command line](https://docs.gitlab.com/ee/gitlab-basics/add-file.html#add-a-file-using-the-command-line) or push an existing Git repository with the following command:

```
cd existing_repo
git remote add origin https://scm.univ-tours.fr/22310122t/graphe.git
git branch -M main
git push -uf origin main
```

## Integrate with your tools

- [ ] [Set up project integrations](https://scm.univ-tours.fr/22310122t/graphe/-/settings/integrations)

## Collaborate with your team

- [ ] [Invite team members and collaborators](https://docs.gitlab.com/ee/user/project/members/)
- [ ] [Create a new merge request](https://docs.gitlab.com/ee/user/project/merge_requests/creating_merge_requests.html)
- [ ] [Automatically close issues from merge requests](https://docs.gitlab.com/ee/user/project/issues/managing_issues.html#closing-issues-automatically)
- [ ] [Enable merge request approvals](https://docs.gitlab.com/ee/user/project/merge_requests/approvals/)
- [ ] [Automatically merge when pipeline succeeds](https://docs.gitlab.com/ee/user/project/merge_requests/merge_when_pipeline_succeeds.html)

## Test and Deploy

Use the built-in continuous integration in GitLab.

- [ ] [Get started with GitLab CI/CD](https://docs.gitlab.com/ee/ci/quick_start/index.html)
- [ ] [Analyze your code for known vulnerabilities with Static Application Security Testing(SAST)](https://docs.gitlab.com/ee/user/application_security/sast/)
- [ ] [Deploy to Kubernetes, Amazon EC2, or Amazon ECS using Auto Deploy](https://docs.gitlab.com/ee/topics/autodevops/requirements.html)
- [ ] [Use pull-based deployments for improved Kubernetes management](https://docs.gitlab.com/ee/user/clusters/agent/)
- [ ] [Set up protected environments](https://docs.gitlab.com/ee/ci/environments/protected_environments.html)

***

# Editing this README

When you're ready to make this README your own, just edit this file and use the handy template below (or feel free to structure it however you want - this is just a starting point!). Thank you to [makeareadme.com](https://www.makeareadme.com/) for this template.

## Suggestions for a good README
Every project is different, so consider which of these sections apply to yours. The sections used in the template are suggestions for most open source projects. Also keep in mind that while a README can be too long and detailed, too long is better than too short. If you think your README is too long, consider utilizing another form of documentation rather than cutting out information.

## Name
Choose a self-explaining name for your project.

## Description
Let people know what your project can do specifically. Provide context and add a link to any reference visitors might be unfamiliar with. A list of Features or a Background subsection can also be added here. If there are alternatives to your project, this is a good place to list differentiating factors.

## Badges
On some READMEs, you may see small images that convey metadata, such as whether or not all the tests are passing for the project. You can use Shields to add some to your README. Many services also have instructions for adding a badge.

## Visuals
Depending on what you are making, it can be a good idea to include screenshots or even a video (you'll frequently see GIFs rather than actual videos). Tools like ttygif can help, but check out Asciinema for a more sophisticated method.

## Installation
Within a particular ecosystem, there may be a common way of installing things, such as using Yarn, NuGet, or Homebrew. However, consider the possibility that whoever is reading your README is a novice and would like more guidance. Listing specific steps helps remove ambiguity and gets people to using your project as quickly as possible. If it only runs in a specific context like a particular programming language version or operating system or has dependencies that have to be installed manually, also add a Requirements subsection.

## Usage
Use examples liberally, and show the expected output if you can. It's helpful to have inline the smallest example of usage that you can demonstrate, while providing links to more sophisticated examples if they are too long to reasonably include in the README.

## Support
Tell people where they can go to for help. It can be any combination of an issue tracker, a chat room, an email address, etc.

## Roadmap
If you have ideas for releases in the future, it is a good idea to list them in the README.

## Contributing
State if you are open to contributions and what your requirements are for accepting them.

For people who want to make changes to your project, it's helpful to have some documentation on how to get started. Perhaps there is a script that they should run or some environment variables that they need to set. Make these steps explicit. These instructions could also be useful to your future self.

You can also document commands to lint the code or run tests. These steps help to ensure high code quality and reduce the likelihood that the changes inadvertently break something. Having instructions for running tests is especially helpful if it requires external setup, such as starting a Selenium server for testing in a browser.

## Authors and acknowledgment
Show your appreciation to those who have contributed to the project.

## License
For open source projects, say how it is licensed.

## Project status
If you have run out of energy or time for your project, put a note at the top of the README saying that development has slowed down or stopped completely. Someone may choose to fork your project or volunteer to step in as a maintainer or owner, allowing your project to keep going. You can also make an explicit request for maintainers.
