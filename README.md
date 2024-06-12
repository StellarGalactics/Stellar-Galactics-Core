# Stellar Galactics Game

Stellar Galactics Game is an idle auto-battler with the psychological stress of asteroid mining. The game is built on Solana and is playable on Mobile and Browsers. The game involves minting and managing in-game Cyborg NFTs, sending them on asteroid mining/looting missions, and relieving their stress by visiting Zion. 

It was started as the flagship game of Stellar Galactics, a Solana NFT collection. Sadly, amidst co-founder conflicts, we'll be ceasing operations. While it aches our hearts to shout-down operations, we’ve always been community first, and to honor our commitment to the community, we have decided to open-source our game code and blender files. By doing so, we hope to empower others to build upon our work and further advance the web3 gaming ecosystem.

You can access all of the Blender files used for asset creation [here](https://drive.google.com/drive/folders/1QFpQHApEZSufYxGNhFtJ8M9XsO4lcPL0?usp=sharing).

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.

### Prerequisites

Things you need to get the game running

```
1. Unity: Game Engine
2. Node.js: JavaScript runtime environment
3. Repository Clone
4. npm or Yarn: Package managers
5. TypeScript: For compiling TypeScript code
6. Wrangler: CLI tool to manage and deploy Cloudflare Workers
7. Prisma: For database management with Prisma ORM
8. MongoDB: NoSQL database
9. Redis: Cloud service for Redis (Upstash Redis)
```

### Installing

A step-by-step series of examples that tell you how to get the game running

### Part 1: Running Unity Files
#### 1. Install Unity Editor version 2022.3.30f1 (LTS)
Download and install Unity Hub from [Unity website](https://unity.com/download).

#### 2. Run Unity Files
Using Unity Hub, navigate to SG-Public-Test/SGUnity-main/ via `Locate`. This will get the Unity project up and running.


### Part 2: Running development env
#### 1. Install Node.js and npm
Download and install from [Node.js website](https://nodejs.org/).

#### 2. Clone the Repository
```sh
git clone https://github.com/RavenousAbyss/SG-Public-Test.git
cd [SG-Public-Test]
```

#### 3. Install Dependencies
```sh
npm install
```

#### 4. Install TypeScript Globally
```sh
npm install -g typescript
```

#### 5. Install Wrangler Globally
```sh
npm install -g wrangler
```

#### 6. Set Up Prisma
Configure Prisma using `schema.prisma` and run migrations:
```sh
npx prisma migrate dev
```

#### 7. Install MongoDB
Download and install from [MongoDB website](https://www.mongodb.com/try/download/community). 
Start MongoDB server:
```sh
mongod
```

#### 8. Configure Environment Variables
Set necessary environment variables:
```sh
export UPSTASH_REDIS_REST_URL="your_upstash_redis_url"
export MONGODB_URI="your_mongodb_uri"
```

#### 9. Run Server and Backend
Start the development server:
```sh
npm run dev
```


## Code of Conduct

Please read [CODE_OF_CONDUCT.md](CODE_OF_CONDUCT.md) for details on our code of conduct.


## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

*  We are sincerely thankful for the Stellar Galactics community's support and belief in our vision. You have been the driving force behind our resilience, and we extend our deepest gratitude to each and every one of you.

