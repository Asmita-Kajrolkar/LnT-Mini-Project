# Test Plan
## Table Name-High Level Test Plan
|Test ID         | Description   |Exp I/P|Exp O/P | Actual Output | Type of Test|
| -------------  | ------------- |-----------|-------------|-------------|-------|
| H_01             | Calling User Menu        |fitness_calculator_menu()|User Menu Appears|User Menu Appears|Requirement Based|
|H_02           |Switching from menu to the BMI Calculation     |1| BMI Menu appears| BMI Menu appears|Scenario Based|
|H_03               | Switching from menu to the BMR Calculation      |2| BMR Menu appears| BMR Menu appears|Scenario Based|
| H_04          |Switching from menu to the Calorie Requirement Calculation      |3| Calorie Requirement Menu appears| Calorie Requirement Menu appears|Scenario Based|
| H_05         | Exiting the application      |Application closes when user enters 4|Application closes|Application closes|Boundary Based|

## Table Name-Low Level Test Plan
|Test ID         | Description   |Exp I/P|Exp O/P | Actual Output | Type of Test|
| -------------  | ------------- |-----------|-------------|-------------|-------|
| I_01             | Performing BMI Calculation and showing result        |fitness_calculator_menu()|User Menu Appears|User Menu Appears|Requirement Based|
|I_02           | Performing BMR Calculation and showing result     |1| BMI Menu appears| BMI Menu appears|Requirement Based|
|I_03               |  Performing Calorie Requirement Calculation and showing result      |2| BMR Menu appears| BMR Menu appears|Requirement Based|
