#include "ghidra_types.h"

extern int func_0014FF58(undefined4 *param_1,int param_2);
extern int func_002AB1CC(uint param_1,int param_2,uint param_3);
extern int func_002AF530(int param_1,undefined4 *param_2,undefined4 param_3);
extern int func_004F9880(int param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_004FBA3C(int param_1,undefined4 param_2,int param_3);
extern int func_0051E6D0(int param_1,float *param_2,float fparam_0);
extern float DAT_004fb864;
extern int *DAT_004fb868;
extern int DAT_004fb86c;

// USA 004FB4FC <- EU 004FB4D4 (Ghidra, non-matching)
// GLOBAL DAT_004fb864 float
// GLOBAL DAT_004fb868 int *
// GLOBAL DAT_004fb86c int

uint func_004FB4FC(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  if (*param_2 == 0) {
    return 0;
  }
  uVar4 = 0;
  switch(*(undefined1 *)((int)param_2 + 0x21)) {
  default:
    cVar1 = *(char *)((int)param_2 + 0x21);
    bVar5 = cVar1 == '\0';
    if (bVar5) {
      cVar1 = *(char *)((int)param_2 + 0x23);
    }
    if (bVar5 && cVar1 == '\x03') {
      if ((short)param_2[0xc] != 0) {
        if (*(char *)((int)param_1 + 0x895) == '\x02') goto LAB_004fb944;
LAB_004fb93c:
        uVar4 = 0x12;
        break;
      }
    }
    else if ((short)param_2[0xc] != 0) goto LAB_004fb8f8;
  case 0xd:
switchD_004fb4fc_caseD_d:
    uVar4 = 0xf;
    break;
  case 1:
switchD_004fb4fc_caseD_1:
    uVar4 = 0xb;
    break;
  case 2:
    if ((short)param_2[0xc] == 0) goto switchD_004fb4fc_caseD_d;
    if (*(char *)((int)param_1 + 0x895) != '\x02') goto LAB_004fb93c;
LAB_004fb944:
    uVar4 = 0x13;
    break;
  case 3:
    if (*(char *)((int)param_2 + 0x23) == '\x01') goto switchD_004fb4fc_caseD_1;
    if (*(char *)((int)param_2 + 0x23) != '\x02') goto switchD_004fb4fc_caseD_d;
    if (((param_1[0x168] & 0x200000U) != 0) && ((short)param_2[0xc] == 0)) {
      return 0;
    }
    local_20 = ALBW_AS_F32(param_1[0xf4]);
    local_18 = param_1[0xf6];
    local_1c = ALBW_AS_F32(param_1[0xf5]) + ALBW_AS_F32(param_1[0x131]) + DAT_004fb864;
    iVar2 = func_0051E6D0(*DAT_004fb868,&local_20,ALBW_AS_F32(param_1[0x131]) + DAT_004fb864);
    if (iVar2 == 0) {
      return 0;
    }
    uVar4 = 8;
    break;
  case 4:
  case 0x11:
    break;
  case 5:
    uVar4 = (uint)param_2[0xe] >> 0x1c;
    if (((uVar4 == 0) && ((short)param_2[0xc] != 0)) &&
       (((param_1[0x167] & 0x8000000U) != 0 && (param_2[0xe] & 0xc000000U) != 0 &&
        ((*(short *)((int)param_1 + 0x50a) <= (short)param_1[0x143] && ((short)param_1[0x142] < -3))
        )))) {
      uVar4 = 0x1e;
    }
    else {
      uVar3 = 0x10;
      if ((short)param_2[0xc] == 0) {
        uVar3 = 0xf;
      }
      iVar2 = 0;
      if (uVar4 == 1) {
        iVar2 = -1;
      }
      else if (uVar4 == 2 || uVar4 == 4) {
        iVar2 = 1;
      }
      uVar4 = func_002AB1CC(uVar3,iVar2,0);
    }
    break;
  case 8:
    if ((short)param_2[0xc] == 0) {
LAB_004fb8f8:
      uVar4 = 0x10;
    }
    else {
      if ((((char)param_1[0x212] != '\0') || ((char)param_1[0x1ff] == '\x05')) ||
         (0 < *(short *)(DAT_004fb86c + (int)param_1))) goto switchD_004fb4fc_caseD_f;
      if ((char)param_1[0x225] == '\0') {
        uVar4 = 0x14;
      }
      else {
        if ((char)param_1[0x225] == '\x04') goto switchD_004fb4fc_caseD_f;
        uVar4 = 0x20;
      }
    }
    break;
  case 9:
  case 10:
    if (*(short *)(DAT_004fb86c + (int)param_1) < 1) goto switchD_004fb4fc_caseD_d;
    if ((param_1[0x168] & 0x200000U) == 0) {
      if (*(char *)((int)param_1 + 0x4b5) == '\0') {
        iVar2 = param_1[0x10c];
        if (iVar2 != 0) goto LAB_004fb6a4;
LAB_004fb6c0:
        if ((short)param_2[0xc] == 0) {
          if (*(char *)(param_1[0x144] + 4) == '\a') {
            func_002AF530((int)param_1,param_2 + 5,(int)*(char *)((int)param_2 + 0x21));
            cVar1 = *(char *)((int)param_2 + 0x21);
            goto joined_r0x004fb720;
          }
        }
        else if ((param_1[0x167] & 0x20000000U) != 0) goto LAB_004fb6d8;
        uVar4 = 7;
      }
      else {
        iVar2 = param_1[0x10d];
        if (iVar2 == 0) goto LAB_004fb6c0;
LAB_004fb6a4:
        uVar3 = (*(ushort *)(iVar2 + 0x28) & 0x7e0) >> 5;
        if ((uVar3 != 5 && uVar3 != 7) && uVar3 != 9) goto LAB_004fb6c0;
LAB_004fb6d8:
        uVar4 = 0xf;
      }
      goto LAB_004fb9b0;
    }
    if ((short)param_2[0xc] == 0) {
      func_002AF530((int)param_1,param_2 + 5,(int)*(char *)((int)param_2 + 0x21));
      cVar1 = *(char *)((int)param_2 + 0x21);
joined_r0x004fb720:
      if (cVar1 == '\x05') {
        func_0014FF58(param_2 + 5,(param_2[0xe] & 0xc000000U) >> 0x1a);
      }
      func_004F9880((int)*(char *)((int)param_2 + 0x21),param_1,param_1 + 0xf4,1);
      func_004FBA3C((int)param_1,(int)*(char *)((int)param_2 + 0x21),
                    (int)*(char *)((int)param_2 + 0x23));
      break;
    }
    goto LAB_004fb684;
  case 0xb:
    if (((param_1[0x168] & 0x200000U) == 0) || ((short)param_2[0xc] != 0)) {
      uVar4 = 6;
      break;
    }
    goto LAB_004fb908;
  case 0xc:
    if ((char)param_1[0x1ff] != '\x02' && (char)param_1[0x1ff] != '\x03') {
      if (((param_1[0x168] & 0x200000U) != 0) && ((short)param_2[0xc] == 0)) goto LAB_004fb908;
      uVar4 = 5;
    }
    break;
  case 0xe:
    if (7 < *(ushort *)(param_2 + 0xc)) goto LAB_004fb8f8;
    goto switchD_004fb4fc_caseD_d;
  case 0xf:
switchD_004fb4fc_caseD_f:
    uVar4 = 0x11;
    break;
  case 0x10:
    uVar4 = 0x1d;
    break;
  case 0x12:
    if ((param_1[0x168] & 0x200000U) == 0) {
      uVar4 = 10;
      goto LAB_004fb9b0;
    }
    if ((short)param_2[0xc] != 0) {
      uVar4 = 0xf;
    }
    goto LAB_004fb908;
  }
  if ((param_1[0x168] & 0x200000U) == 0) {
LAB_004fb954:
    if (uVar4 != 0x12) {
      if (((uVar4 == 0xb) && (cVar1 = (char)param_1[0x1ff], cVar1 != '\x05')) &&
         ((cVar1 != '\0' && cVar1 != '\x04' ||
          (((short)param_2[0xc] == 0 || (0 < *(short *)(DAT_004fb86c + (int)param_1))))))) {
LAB_004fb684:
        uVar4 = 0x10;
      }
      goto LAB_004fb9b0;
    }
  }
  else {
LAB_004fb908:
    if (0 < *(short *)(DAT_004fb86c + (int)param_1)) goto LAB_004fb954;
    if (uVar4 != 0x12) {
      return 0x1f;
    }
  }
  if ((char)param_1[0x1ff] == '\x05') {
    return 0x13;
  }
LAB_004fb9b0:
  if (((param_1[0x167] & 0x40000U) != 0) && ((uVar4 & 0xff) - 5 < 5)) {
    uVar4 = 0xf;
  }
  if (((param_1[0x167] & 0x20000U) != 0) && ((uVar4 == 0xb || uVar4 == 6) || uVar4 == 5)) {
    uVar4 = 0xf;
  }
  return uVar4;
}

