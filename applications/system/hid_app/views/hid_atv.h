#pragma once

#include <gui/view.h>

typedef struct Hid Hid;
typedef struct HidAtv HidAtv;

HidAtv* hid_atv_alloc(Hid* hid);

void hid_atv_free(HidAtv* hid_atv);

View* hid_atv_get_view(HidAtv* hid_atv);

void hid_atv_set_connected_status(HidAtv* hid_atv, bool connected);
