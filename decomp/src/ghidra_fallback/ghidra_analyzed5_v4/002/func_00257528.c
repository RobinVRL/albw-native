#include "ghidra_types.h"

extern int func_0010CF7C(undefined4 *param_1,undefined1 param_2);
extern int func_00259CBC(int param_1,uint param_2);
extern int func_00293CF0(int param_1,int param_2);
extern int func_00293DA0(int param_1,int param_2);
extern int func_00409B8C(int *param_1);
extern void func_00409BC8(int *param_1,int *param_2,float fparam_0);
extern int func_0048BCBC(int *param_1,undefined4 param_2);
extern int func_004B083C(void);
extern int func_004CDF40(int param_1,int param_2,int param_3);
extern int func_00540368(int param_1,uint param_2);
extern int func_0056A1A4(int param_1,undefined1 *param_2);
extern int func_00587FCC(int param_1,int *param_2);
extern int *DAT_00257934;
extern int *DAT_00257938;
extern int DAT_0025793c;
extern int DAT_00257950;
extern int *DAT_00257954;
extern int *DAT_00257a5c;
extern char s_BGM_Demo8_mov5_00257940[];

// USA 00257528 <- EU 00257550 (Ghidra, non-matching)
// GLOBAL DAT_00257934 int *
// GLOBAL DAT_00257938 int *
// GLOBAL DAT_0025793c int
// GLOBAL DAT_00257950 int
// GLOBAL DAT_00257954 int *
// GLOBAL DAT_00257a5c int *
// GLOBAL s_BGM_Demo8_mov5_00257940 string

undefined4 func_00257528(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  float in_s0;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 ((int *)(albw_frame + 0x0))
  #define local_78 ((char *)(albw_frame + 0x8))
  #define local_74 (*(uint *)(albw_frame + 0xc))
  #define local_70 (*(uint *)(albw_frame + 0x10))
  #define local_6c (*(int *)(albw_frame + 0x14))
  #define local_68 (*(int *)(albw_frame + 0x18))
  #define local_64 (*(char * *)(albw_frame + 0x1c))
  #define local_60 (*(int *)(albw_frame + 0x20))
  #define local_5c (*(undefined4 *)(albw_frame + 0x24))
  #define local_58 (*(int *)(albw_frame + 0x28))
  #define local_54 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_50 (*(int *)(albw_frame + 0x30))
  #define local_4c (*(undefined4 *)(albw_frame + 0x34))
  #define local_48 (*(int *)(albw_frame + 0x38))
  #define local_44 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_40 (*(int *)(albw_frame + 0x40))
  #define local_3c (*(undefined4 *)(albw_frame + 0x44))
  #define local_38 (*(int *)(albw_frame + 0x48))
  #define local_34 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_30 (*(int *)(albw_frame + 0x50))
  #define local_2c (*(undefined4 *)(albw_frame + 0x54))
  #define local_28 (*(int *)(albw_frame + 0x58))
  #define local_24 (*(undefined4 *)(albw_frame + 0x5c))
  *(bool *)(param_1 + 100) = *(char *)(param_1 + 0x10) == '\0';
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  func_00409BC8(local_80,(int *)(param_1 + 0xc),in_s0);
  iVar7 = 0;
  if ((local_80[0] != 0) && (iVar7 = func_0056A1A4(local_80[0],local_78), iVar7 != 0)) {
    *(char *)(param_1 + 0x6b) = local_78[0];
    *(short *)(param_1 + 0x62) = (short)local_74;
    if ((local_78[0] != '\0') &&
       (uVar5 = local_6c + (local_74 & 0xffff) * -10, *(uint *)(param_1 + 0x50) = uVar5,
       uVar5 < local_70)) {
      *(uint *)(param_1 + 0x50) = local_70;
    }
  }
  piVar1 = DAT_00257938;
  if (*(char *)(param_1 + 0x6a) != '\0') goto LAB_00257a4c;
  if (*(char *)(*DAT_00257934 + 0x25) == '\x03') {
    func_0010CF7C((undefined4 *)(param_1 + 0x14),3);
    *(undefined1 *)(param_1 + 0x6c) = 1;
  }
  else {
    iVar6 = func_004B083C();
    iVar3 = DAT_00257950;
    iVar2 = DAT_0025793c;
    if (iVar6 == 0) {
      local_64 = *(char **)(DAT_00257950 + 0x18);
      local_68 = DAT_0025793c;
      iVar7 = func_00587FCC(*piVar1,&local_68);
      if (iVar7 == param_2) {
        func_0010CF7C((undefined4 *)(param_1 + 0x14),5);
      }
      else {
        local_5c = *(undefined4 *)(iVar3 + 0x28);
        local_60 = iVar2;
        iVar7 = func_00587FCC(*piVar1,&local_60);
        if (iVar7 == param_2) {
          func_0010CF7C((undefined4 *)(param_1 + 0x14),6);
        }
        else {
          local_54 = *(undefined4 *)(iVar3 + 0xc);
          local_58 = iVar2;
          iVar7 = func_00587FCC(*piVar1,&local_58);
          if (iVar7 == param_2) {
            func_0010CF7C((undefined4 *)(param_1 + 0x14),7);
          }
          else {
            local_4c = *(undefined4 *)(iVar3 + 0x2c);
            local_50 = iVar2;
            iVar7 = func_00587FCC(*piVar1,&local_50);
            if (iVar7 == param_2) {
              func_0010CF7C((undefined4 *)(param_1 + 0x14),8);
            }
            else {
              local_44 = *(undefined4 *)(iVar3 + 0x30);
              local_48 = iVar2;
              iVar7 = func_00587FCC(*piVar1,&local_48);
              if (iVar7 == param_2) {
                func_00259CBC(*piVar1,0x10);
              }
              else {
                local_3c = *(undefined4 *)(iVar3 + 0x34);
                local_40 = iVar2;
                iVar7 = func_00587FCC(*piVar1,&local_40);
                piVar4 = DAT_00257954;
                if (iVar7 == param_2) {
                  if (*DAT_00257954 != 0) {
                    iVar7 = (int)*(char *)(*DAT_00257954 + 0x18);
                    uVar5 = iVar7 - 2;
                    bVar9 = 2 < uVar5;
                    bVar8 = uVar5 == 3;
                    if (3 < uVar5) {
                      bVar9 = iVar7 != 0x16;
                      bVar8 = iVar7 == 0x17;
                    }
                    if ((!bVar9 || bVar8) && ((*(uint *)(param_1 + 0x38) & 0x100) == 0)) {
                      func_00293DA0(*(int *)(param_1 + 8),0);
                    }
                  }
                  func_0010CF7C((undefined4 *)(param_1 + 0x14),4);
                }
                else if ((*(uint *)(param_1 + 0x38) & 0x40) == 0) {
                  local_34 = *(undefined4 *)(iVar3 + 0x1c);
                  local_38 = iVar2;
                  iVar7 = func_00587FCC(*piVar1,&local_38);
                  if (iVar7 == param_2) {
                    func_0010CF7C((undefined4 *)(param_1 + 0x14),9);
                  }
                  else {
                    local_2c = *(undefined4 *)(iVar3 + 0x20);
                    local_30 = iVar2;
                    iVar7 = func_00587FCC(*piVar1,&local_30);
                    if (iVar7 == param_2) {
                      func_0010CF7C((undefined4 *)(param_1 + 0x14),10);
                    }
                    else {
                      local_24 = *(undefined4 *)(iVar3 + 4);
                      local_28 = iVar2;
                      iVar7 = func_00587FCC(*piVar1,&local_28);
                      if (iVar7 == param_2) {
                        if (*DAT_00257a5c != 0) {
                          func_004CDF40(*DAT_00257a5c,0xa6,1);
                        }
                      }
                      else if (*piVar4 != 0) {
                        iVar7 = (int)*(char *)(*piVar4 + 0x18);
                        uVar5 = iVar7 - 2;
                        bVar9 = 2 < uVar5;
                        bVar8 = uVar5 == 3;
                        if (3 < uVar5) {
                          bVar9 = iVar7 != 0x16;
                          bVar8 = iVar7 == 0x17;
                        }
                        if (!bVar9 || bVar8) {
                          if (((*(uint *)(param_1 + 0x38) & 3) == 0) ||
                             ((*(uint *)(param_1 + 0x38) & 0x100) != 0)) goto LAB_002579e4;
                          func_00293DA0(*(int *)(param_1 + 8),0);
                        }
                      }
                    }
                  }
                }
                else {
                  func_0010CF7C((undefined4 *)(param_1 + 0x14),1);
LAB_002579e4:
                  func_00293CF0(*(int *)(param_1 + 8),0);
                }
              }
            }
          }
        }
      }
    }
    else if (iVar7 != 0) {
      func_0010CF7C((undefined4 *)(param_1 + 0x14),2);
      *(undefined1 *)(param_1 + 0x6c) = 1;
      local_64 = s_BGM_Demo8_mov5_00257940;
      local_68 = iVar2;
      iVar7 = func_00587FCC(*piVar1,&local_68);
      if (iVar7 == param_2) {
        func_00259CBC(*piVar1,8);
      }
    }
  }
  if (((*(char *)(param_1 + 0x6a) == '\0') && (iVar7 = func_00540368(*piVar1,0xc), iVar7 != 0)) &&
     (*(char *)(param_1 + 0x65) == '\0')) {
    func_0048BCBC((int *)(param_1 + 0xc),0);
    *(undefined1 *)(param_1 + 0x65) = 1;
  }
LAB_00257a4c:
  return func_00409B8C(local_80);
}

