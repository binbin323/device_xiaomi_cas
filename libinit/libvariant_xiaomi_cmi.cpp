/*
 * Copyright (C) 2021-2025 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libvariant.h>

static const variant_info cmi_info = {
    .hwc_value = "",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "cas",
    .marketname = "",
    .model = "Mi 10 Ultra",
    .build_fingerprint = "Xiaomi/cas/cas:13/TKQ1.221114.001/V816.0.4.0.TJJCNXM:user/release-keys",

    .nfc = true,
};

const std::vector<variant_info> variants = {
    cmi_info,
};
