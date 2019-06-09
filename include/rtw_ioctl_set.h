/* SPDX-License-Identifier: GPL-2.0 */
/* Copyright(c) 2007 - 2017 Realtek Corporation */

#ifndef __RTW_IOCTL_SET_H_
#define __RTW_IOCTL_SET_H_


typedef u8 NDIS_802_11_PMKID_VALUE[16];

typedef struct _BSSIDInfo {
	unsigned char  BSSID[6];
	NDIS_802_11_PMKID_VALUE  PMKID;
} BSSIDInfo, *PBSSIDInfo;

u8 rtw_set_802_11_authentication_mode(struct adapter *pdapter, enum ndis_802_11_authentication_mode authmode);
u8 rtw_set_802_11_bssid(struct adapter *adapt, u8 *bssid);
u8 rtw_set_802_11_add_wep(struct adapter *adapt, struct ndis_802_11_wep *wep);
u8 rtw_set_802_11_disassociate(struct adapter *adapt);
u8 rtw_set_802_11_bssid_list_scan(struct adapter *adapt, struct sitesurvey_parm *pparm);
u8 rtw_set_802_11_infrastructure_mode(struct adapter *adapt, enum ndis_802_11_network_infrastructure networktype);
u8 rtw_set_802_11_ssid(struct adapter *adapt, struct ndis_802_11_ssid *ssid);
u8 rtw_set_802_11_connect(struct adapter *adapt, u8 *bssid, struct ndis_802_11_ssid *ssid);

u8 rtw_validate_bssid(u8 *bssid);
u8 rtw_validate_ssid(struct ndis_802_11_ssid *ssid);

u16 rtw_get_cur_max_rate(struct adapter *adapter);
int rtw_set_scan_mode(struct adapter *adapter, enum rt_scan_type scan_mode);
int rtw_set_channel_plan(struct adapter *adapter, u8 channel_plan);
int rtw_set_country(struct adapter *adapter, const char *country_code);
int rtw_set_band(struct adapter *adapter, u8 band);

#endif
