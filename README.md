# ScaNN (Scalable Nearest Neighbors)

## Giới thiệu
Đề tài này nhằm khám phá và thực hiện thuật toán ScaNN - một giải pháp tìm kiếm vector gần đúng do Google phát triển. ScaNN được sử dụng trong các hệ thống lớn như Google Search và TensorFlow, nhờ khả năng truy vấn vector với độ chính xác cao và mức sử dụng bộ nhớ tối ưu.

## Mục tiêu
- Nghiên cứu kiến trúc và cơ chế hoạt động của **ScaNN**, bao gồm:
  - **Partitioning** (phân vùng)
  - **Scoring** (tính điểm tương đồng)
  - **Reordering** (sắp xếp lại kết quả)
- So sánh hiệu năng giữa **ScaNN** và các thuật toán ANN khác (HNSW, Faiss, Annoy, brute-force).
- Xây dựng **hệ thống tìm kiếm top-K vector gần đúng**, có thể chạy trên Google Colab.
- Đánh giá **thời gian truy vấn, độ chính xác, và mức tiêu tốn bộ nhớ**.

## Cài đặt
