# Presentation du projet
A l’issue de la realisation de ce projet nous avons fait appel ´ a plusieurs notions utiles et importantes permettant ` a am ` eliorer ´
et structurer le code en gen´ eral. Notre projet consiste ´ a cr ` eer une librairie pour la cr ´ eation et la gestion des graphes. Pour ´
ce faire nous avons fait le choix de modeliser plusieurs classes pour la gestion du code comme pr ´ ecis ´ e sur le sujet : ´ CArc,
CSommet, CGraphOrient, CGraph;
Neanmoins nous Avons fait le choix d’ajouter une classe ´ AfficherGraph puisque selon le point de vue genie logiciel, ´
la creation de la classe AfficherGraph offre une s ´ eparation claire des responsabilit ´ es, facilitant ainsi la maintenance du ´
code en isolant la logique d’affichage. En encapsulant cette fonctionnalite, le code devient plus r ´ eutilisable et lisible, ´
favorisant le principe d’encapsulation et de la reutilisation ´ du genie logiciel. ´
De meme nous avons ˆ egalement inclut une classe nomm ´ ee´ CException comme vu dans le cours pour traiter les erreurs
probables dans notre code et ainsi eviter les interruptions du projet. Cette classe affiche ´ egalement les messages d’erreurs ´
facilitant la gestion des erreurs. Pour approfondir davantage, nous allons presenter nos structures utilis ´ ees. Commenc¸ons ´
par la classe CArc :
• La classe CArc represente un arc dans un graphe, reliant deux sommets. Cette classe contient deux attributs, ´
ces derniers sont represent ´ es par des string pour nous laisser la possibilit ´ e de mettre soit un texte ou un num ´ ero ´
dans l’identifiant des sommets si on le souhaite. Elle contient des methodes permettant de g ´ erer les informations ´
associees ´ a cet arc. Cette derni ` ere permet de cr ` eer, modifier et acc ´ eder aux informations relatives ´ a un arc dans un `
graphe.
• La classe CSommet represente un sommet dans un graphe. Elle contient des attributs tels que l’identifiant du ´
sommet et des listes de pointeurs d’arcs sortants et entrants. Les methodes de cette classe permettent d’acc ´ eder ´
a l’identifiant du sommet, aux arcs sortants et entrants, ainsi que d’ajouter ou supprimer des arcs associ ` es´ a ce `
sommet.
• La classe CGraphOrient qui est une classe gen´ erique (prend en argument deux classes CArc et CSommet), elle g ´ ere `
la creation et la gestion d’un graphe elle contient deux attributs : une liste des sommets existants dans le graph, et ´
une liste d’arc du graph et comporte plusieurs fonctions principales necessaires au graph tel : ´
– Ajouter/modifier/supprimer un sommet au graphe.
– Ajouter/modifier/supprimer un arc du graphe.
– Inverser le graphe.
De plus on a fait le choix de decomposer certaines fonctions pour utiliser le principe de r ´ eutilisation de g ´ enie ´
logiciel comme la fonction supprimer sommet ou on fait appel ` a la fonction supprimer tout arc entant au sommet `
et supprimer tout arc sortant du sommet.Et pour eviter les fuites m ´ emoires on a voulu mettre aussi des m ´ ethodes ´
qui vont verifier si une allocation a r ´ eussi ou a ´ echou ´ e cette derni ´ ere retourne une exception dans le cas inverse. En `
combinant ces methodes avec des op ´ erations de gestion des sommets et des arcs, la classe CGraphOrient offre un ´
ensemble complet de fonctionnalites pour la cr ´ eation, la modification et la suppression des ´ el´ ements d’un graphe ´
oriente.´
• La classe CGraph qui herite de la classe ´ CGraphOrient elle gere les graphs non orient ` es, elle utilise les m ´ ethodes ´
de CGaphOrient pour ajouter, modifier un sommet ou le supprimer de plus elle ajoute une arrete entre deux sommets ˆ
et modifie une arrete du graphe. ˆ
• La fonction principale liregraph qui va ouvrir un fichier txt souhaite, le lire et afficher par la suite un graphe soit ´
oriente soit non Orient ´ e selon l’utilisateur. ´
NB : notre fonction peut lire des fichier ou les sommets sont des nombres ou des cha ` ˆınes de caracteres. `
Pendant le developpement de notre code on a fait plusieurs tests dans diff ´ erents sc ´ enarios. on a test ´ e les cas pire ou ´
impossibles pour traiter les erreurs. Ainsi valider le bon fonctionnement du code et assurer sa qualité.

[Rapport (1).pdf](https://github.com/user-attachments/files/17013954/Rapport.1.pdf)


## Getting started

To make it easy for you to get started with GitLab, here's a list of recommended next steps.

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
