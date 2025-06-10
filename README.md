# C++ API Gateway with Rate Limiting

A lightweight, high-performance API gateway in C++ that supports reverse proxying, per-route rate limiting, and JSON configuration.

## ✅ Features
- Reverse proxy requests to different backend URLs
- Token bucket-based rate limiting
- Per-route configuration via JSON
- Minimal dependency: uses `cpp-httplib`

## 🧪 Run Locally

1. Install dependencies:
   - `cpp-httplib` (header-only, already included)
2. Build:
   ```bash
   mkdir build && cd build
   cmake ..
   make