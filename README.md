# ScaNN (Scalable Nearest Neighbors)

## Introduction
This project explores and implements **ScaNN** — an Approximate Nearest Neighbor Search (ANN) algorithm developed by **Google Research**. ScaNN is used in large-scale systems like **Google Search** and **TensorFlow**, known for its ability to **accelerate vector queries with high accuracy** and **optimized memory usage**.

## Objectives
- Study ScaNN's architecture and mechanisms, including:
  - **Partitioning** strategies
  - **Scoring** methods for similarity measurement
  - **Reordering** techniques for result refinement
- Compare performance between **ScaNN** and other ANN algorithms (HNSW, Faiss, Annoy, brute-force).
- Build a **top-K approximate nearest neighbor search system** compatible with Google Colab.
- Evaluate **query time, accuracy, and memory consumption**.

## Project Structure
```
├── data/                 
├── src/
│   ├── brute_force.py    
│   ├── scann_search.py   
│   ├── evaluate.py       
│   └── visualize.py      
├── notebook/
│   └── demo_colab.ipynb  
├── report/
│   └── report.pdf       
├── video_demo/           
└── README.md
```

## Installation
### 1. Clone Repository
```
git clone https://github.com/nguyenTraMy-dasick/scaNN
cd scaNN
```
### 2. Set Up Python Environment
```
pip install -r requirements.txt
```
For Google Colab:
```
!pip install scann numpy scikit-learn matplotlib sentence-transformers
```

## How to Run
### 1. Run Brute-Force Baseline
```
python src/brute_force.py
```
