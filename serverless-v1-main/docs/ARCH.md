<!-- CYBORG GAME POSITION (TOP TO BOTTOM)-->

F1, F2, F3
B1, B2, B3

# Start Mine

- `authUser()`
- `validateCyborg()` (users own or not)
- `canCyborgParticipate()` (whether cyborg can able to participate or not) (cooldown or some x_y_z factor)
- `simulateMine()`
- `saveMineSimulation()` save game simulation in database; so that we can use it later

# Start Loot

- `authUser()`
- `isActiveMine(mine_id)` whether `selectedMineId` is active and avaiable
  - `isMineAvaiable(mine_id)`
- `validateCyborg()` (users own or not)
- `canCyborgParticipate()` (whether cyborg can able to participate or not) (cooldown or some x_y_z factor)
- `simulateLoot()`
- `saveLootSimulation()` save game simulation in database; so that we can use it later

# Mine base NFT

- `randomCyborgSequence()` sequence is bascially a cyborgs traits
- `fetchCyborgSequenceMetadata()` we need to fetch metadata from R2 (TODO: optimize this shit)
- `mintGeneratedSequenceNFT()`
- `updateUserDB()` we also need to update user' assets table to reflect changes



# PRISMA
We are using prisma as ORM.
we are also leveraging it's proxy with mongoDB reason being mongoDB in not yet supported HTTP/HTTPS direct connection which is required/critical in serverless application

## commands
`npx prisma init`
`npx prisma format`
`npx prisma generate --data-proxy` (we are using --data-proxy here 'cuz we are using prisma proxy)
`npx prisma db push`