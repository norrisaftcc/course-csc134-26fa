# M5LAB1 AI prompt log

## Request 1
- **Prompt:** "planning the story"
- **Part:** Story and map planning
- **What changed:** Planned a spooky-house adventure outline that fits the existing menu and choice functions. No C++ code was changed.

## Request 2
- **Prompt:** "Let's add to the story two main threads: front door - sneaking around, maybe find some weird stuff, maybe a treasure; back door - ends in a fight against mutant plants"
- **Part:** Story and map planning
- **What changed:** Expanded the outline into front-door and back-door paths, with strange discoveries and treasure on the front path and a mutant-plant fight ending on the back path. No C++ code was changed.

## Request 3
- **Prompt:** "no, the check around back is a way to eject from front door story and go to back door story so what is next"
- **Part:** Story map clarification and next-step planning
- **What changed:** Clarified that choosing to check around back transitions from the front-door thread to the back-door thread. Recommended implementing the existing `choice_back_door()` function next, then compiling and running before requesting another function. No C++ code was changed.

## Request 4
- **Prompt:** "OK so let's work on choice_back_door"
- **Part:** `choice_back_door()` function
- **What changed:** Replaced the placeholder with a short narrated mutant-plant fight and ending. No other function was changed.

## Request 5
- **Prompt:** "Let's make choice back door have a choice: first option is to investigate the garden where the plant attacks second is to check out the shed where you find weedkiller"
- **Part:** `choice_back_door()` function
- **What changed:** Added a two-option menu in `choice_back_door()`: investigating the garden triggers the mutant-plant attack, while checking the shed reveals weedkiller.

## Request 6
- **Prompt:** "let's wire in the main menu choice"
- **Part:** Main menu option 2
- **What changed:** Connected option 2 in `main_menu()` to `choice_back_door()`.
