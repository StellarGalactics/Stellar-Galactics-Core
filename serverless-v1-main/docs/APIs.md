# APIs endpoint

## Middelware
- /auth/*
  - Check if the header have `authorization`, if yes validate it.

## Endpoints
ALL       *
OPTIONS   *
ALL       /auth/*

[GET] ->    /timestamp
[POST]      /auth/zion
[POST]      /auth/zion/claim
[GET]       /auth/zion
[GET]       /
[GET]       /cyborg -> ?id (get cyborg detail)
[GET]       /auth/mine
[GET]       /auth/user/mine/all
[GET]       /auth/loot
[GET]       /auth/assets/cyborgs
[GET]       /auth/assets/cyborgs/idle
[GET]       /auth/assets/lootboxes
[GET]       /auth/mine/all
[GET]       /auth/loot/all
[GET]       /auth/game
[GET]       /auth/getCompleted
[POST]      /auth/loot
[POST]      /user
[GET]       /auth/user
[POST]      /login
[POST]      /auth/walletGen
[POST]      /auth/endMine
[POST]      /auth/endLoot
[POST]      /auth/rankup
[POST]      /auth/rankup/claim
[POST]      /auth/openLootbox
[POST]      /auth/claimLootbox
[POST]      /auth/mine
[POST]      /auth/mint
[GET]       /auth/game/sim
[GET]       /intern/sim