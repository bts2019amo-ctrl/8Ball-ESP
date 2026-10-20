# 8Ball-ESP

Theos rootless tweak for **8 Ball Pool** (`com.miniclip.8ballpool`)

- ESP overlay (ImGui + Metal)
- AutoPlay / autoclick helpers
- No-screenshot view

## Build (local)

```bash
# requires Theos + iOS SDK
cd 8Ball
make package THEOS_PACKAGE_SCHEME=rootless
```

## GitHub Actions

Push to `main` or run workflow manually → macos-14 runner builds the `.deb`.

Artifact: `8Ball-deb`
