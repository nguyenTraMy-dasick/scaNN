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
├── demo_colab.ipynb 
├── scann.py                    
├── report/
│   └── report.pdf       
├── video_demo/           
└── README.md
```

## Installation and Setup

This project is designed to run on Google Colab to leverage hardware acceleration.

To set up the environment, run the following commands to install compatible library versions:

```
pip install numpy==1.26.4 tensorflow==2.16.2 scann==1.3.1 keras==3.3.3 ml-dtypes==0.3.2 protobuf==4.25.8 tensorboard==2.16.2
pip install sentence-transformers scikit-learn matplotlib pillow tqdm datasets
```

## How to Run

* Open the Notebook: Load the provided .ipynb file or scann.py into Google Colab.

* Input Collection: Execute the input cell to choose your search mode (1 for Image, 2 for Text) and specify the desired K value.

* Data Processing: The system will automatically stream the dataset (ImageNet-Sketch or MS MARCO/AG News) and extract features.

* Performance Analysis: Review the generated tables and graphs to compare ScaNN variants against the baseline.
