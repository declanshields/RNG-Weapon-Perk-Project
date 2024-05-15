# RNG Weapon Perk Project
 An in progress project based around recreating the random weapon perk system from Destiny 2.

 This project aims at creating a scalable weapon perk system. The plan is to create structs for the weapon perks and stats, these will then be stored on a weapon.
 When the weapon is picked up and the inventory screen is opened, it will display the stats and perks that the weapon has. This project is designed to be scalable, so that the weapons can hold as many stats and weapon perk columns as are needed by the dev.
 These should be able to be added in as easy a way as possible, which is why TArrays were used (the Unreal Engine equivalent of vectors).

The end result of this project will be a system that supports the creation of unique weapon perks and stats that can be added to any weapon desired.
The project is currently able to open an inventory screen and display a weapon name, the population of perks and stats is currently underway.

This project may be combined with my Bullet Physics project (which is still in the planning phase) in the future to create a fleshed out system that has function perks which effect how the weapon shoots and how the bullets travel. This could consist of making bullets heavier (and therefore slower / can't travel as far) but the bullets will hit harder since they will have more momentum. It could also result in bouncing bullets that reflect off of surfaces to reach the enemy.
