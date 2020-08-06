/*
 * Copyright (c) 2020 The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

/**
 * DOC: wlan_cm_api.h
 *
 * This file maintains declarations of public apis
 */

#ifndef __WLAN_CM_API_H
#define __WLAN_CM_API_H

#ifdef FEATURE_CM_ENABLE
#include "wlan_cm_public_struct.h"

/**
 * wlan_cm_start_connect() - connect start request
 * @vdev: vdev pointer
 * @req: connect req
 *
 * Return: QDF_STATUS
 */
QDF_STATUS wlan_cm_start_connect(struct wlan_objmgr_vdev *vdev,
				 struct wlan_cm_connect_req *req);

/**
 * wlan_cm_start_disconnect() - disconnect start request
 * @vdev: vdev pointer
 * @req: disconnect req
 *
 * Return: QDF_STATUS
 */
QDF_STATUS wlan_cm_start_disconnect(struct wlan_objmgr_vdev *vdev,
				    struct wlan_cm_disconnect_req *req);

#endif
#endif /* __WLAN_CM_UCFG_API_H */

