## Game Design

Use fixed-size arrays, no vectors. Enums identify rooms and the game state. The design assumes a small house with a foyer, hall, library, and kitchen. The locked front door is in the foyer; the brass key is found in the library. Placing the key in the foyer unlocks the door.

### Arrays

- `roomName[ROOM_COUNT]`: each room’s name.
- `roomDescription[ROOM_COUNT]`: what the player sees when they look around a room.
- `exitTo[ROOM_COUNT][DIRECTION_COUNT]`: the room reached by taking each exit; a `NO_EXIT` value means there is no exit in that direction.
- `itemName[ITEM_COUNT]`: item names, including the brass key.
- `itemDescription[ITEM_COUNT]`: clues or details shown when the player looks at an item.
- `itemRoom[ITEM_COUNT]`: which room each item is in.
- `itemHeld[ITEM_COUNT]`: whether the player is carrying each item.
- `ghostPresent[ROOM_COUNT]`: whether a ghost encounter can happen in each room.

### Enums and Other State

- `Room`: foyer, hall, library, kitchen, and outside, plus `NO_EXIT`.
- `GameState`: playing, won, or lost.
- Track the player’s current and previous room, whether the front door is unlocked, and the die result.

### Game Loop

1. Set up the rooms, exits, ghost, and item locations. Start the player in the foyer with the front door locked.
2. While the game is still playing, show the current room and ask for a text command.
3. For `look`, describe the room and list items there. For `get`, pick up an item in the current room.
4. For `put`, place a carried item in the current room. If the brass key is placed in the foyer, unlock the front door.
5. For movement, check whether an exit exists and whether it is unlocked. If the player reaches outside through the unlocked front door, set the game state to won.
6. If entering a room with a ghost, let the player choose `run` or `breathe`. Running returns them to the previous room. Holding their breath uses a die roll to determine whether they survive.
7. For an invalid command or impossible action, explain what went wrong and let the player try again.
8. When the game state becomes won or lost, show the ending and stop the loop.

**Suggested defaults to confirm:** Use a six-sided die; 4–6 means the player survives holding their breath, while 1–3 means they are caught and lose. The running behavior and failed-roll outcome are design choices because those details were not specified.