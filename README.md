# LeetCode Solutions

My accepted LeetCode submissions, synced automatically to this repo.

## How it works

This repo uses [leetcode-sync](https://github.com/joshcai/leetcode-sync), a GitHub Action that runs on a schedule (see `.github/workflows/sync_leetcode.yml`) and:

- On first run, pulls in every accepted submission already on my LeetCode account.
- On every run after that, picks up anything newly solved since the last sync and commits it here.

It runs automatically every Saturday, and can also be triggered manually any time from the **Actions** tab → **Sync Leetcode** → **Run workflow**.

## Structure

Each synced problem gets its own folder named after the problem, containing the accepted solution file(s) in whatever language it was submitted in.
