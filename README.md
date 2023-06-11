# Dijkstra-2

In deze repo staan alle bestanden voor het werken van het dijkstra algoritme

In src staan de bestanden dijkstra.cpp/hpp en main.cpp. Het algortime zelf zit volledig in de dijkstra bestand met uitzonder van de graph die gebruikt wordt.
In dijkstra.hpp zit de constructor, functie dijkstra en functie shortestPath. shortestPath bepaald de korste pad van de nodes die nog niet bezocht zijn en geeft die als return. 
De Dijkstra algoritme begint met het invullen van bepaald array tot hun standard waarde. Vervolgens roept het de functie shortestpath op om  de korst pad te vinden dit vergelikt die met andere paden in beschikbaar is en kijkt weer of ze het snelst zijn. Vervolgens 
update het zijn omringede buren met de juiste waarden. Dit wordt herhaald tot dat het alleen nodes en paden heeft en dus een compleet map heeft. Vervolgnes gaat het zijn pad terug zoeken van de aangegeven eind punt to de aangegeven start punt. Dit doet het door naar de lastVisted te kijken.
Lastvisited geeft de last bezoekte node van een node dit wordt gebaseerd om de korste route. Vervolgends zoekt het de pad en en convert het naar letters voor het gemak van de gebruiker. die print het naar de terminal.

main.cpp bezit main en Test. main is waar alles wordt gestart hier kan je kiezen of je Test wilt runnen of zelf een graph wilt maken en runnen.

BELANGERIJK : als je de groote van graph aan past moet het worden veranderd in dijkstra.hpp/cpp file anders doet die het niet.
