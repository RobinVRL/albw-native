#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004FC994(uint param_1,int param_2);
extern int func_004FCC24(int param_1,int param_2);
extern int func_0051E5F8(int param_1,float *param_2,undefined4 param_3,float fparam_0,float fparam_1);
extern int func_0065D9FC(undefined4 *param_1,undefined1 param_2);
extern float fRam00216494;
extern int iRam0021648c;
extern undefined4 uRam00216498;
extern undefined4 uRam002164a8;
extern undefined4 uRam002164ac;
extern float *pfRam002164a0;
extern int *piRam0021649c;
extern int *piRam002164a4;
extern undefined4 *puRam00216490;
extern int DAT_00216478;
extern char s_SE_EN_DAMAGE_0021647c[];

// USA 00216218 <- EU 00216218 (Ghidra, non-matching)
// GLOBAL DAT_00216478 int
// GLOBAL UNK_0021648c int
// GLOBAL UNK_00216490 uint *
// GLOBAL UNK_00216494 float
// GLOBAL UNK_00216498 undefined4
// GLOBAL UNK_0021649c int *
// GLOBAL UNK_002164a0 float *
// GLOBAL UNK_002164a4 int *
// GLOBAL UNK_002164a8 undefined4
// GLOBAL UNK_002164ac undefined4
// GLOBAL s_SE_EN_DAMAGE_0021647c string

uint func_00216218(int param_1,uint param_2,int param_3)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  _Alignas(8) unsigned char albw_frame[0x330];
  #define iStack_328 (*(int *)(albw_frame + 0x8))
  #define afStack_324 ((float *)(albw_frame + 0xc))
  #define uStack_30c (*(undefined4 *)(albw_frame + 0x24))
  #define fStack_308 (*(float *)(albw_frame + 0x28))
  #define uStack_304 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_2fe (*(undefined2 *)(albw_frame + 0x32))
  #define uStack_2e0 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_2dc (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x2c8))
  #define afStack_64 ((float *)(albw_frame + 0x2cc))
  #define fStack_40 (*(float *)(albw_frame + 0x2f0))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x2f4))
  #define afStack_34 ((float *)(albw_frame + 0x2fc))
  #define iStack_28 (*(int *)(albw_frame + 0x308))
  #define pcStack_24 (*(char * *)(albw_frame + 0x30c))
  if (*(char *)(param_1 + 0x8c0) == '\x01' && param_2 == 3) {
    param_2 = 0;
  }
  else {
    if ((*(char *)(param_1 + 0xb3d) != '\0') &&
       (*(char *)(param_3 + 0x24) == '\x10' || param_2 == 10)) {
      func_0065D9FC((undefined4 *)(param_1 + 0x8bc),10);
      return 0;
    }
    if (0 < *(int *)(param_1 + 0xa8c)) {
      uVar2 = param_2 & 0xff;
      bVar9 = 0x1d < uVar2;
      bVar8 = uVar2 != 0x1e;
      if (bVar8) {
        uVar2 = uVar2 - 0xe;
        bVar9 = 2 < uVar2;
      }
      if ((!bVar9 || (!bVar8 || uVar2 == 3)) && (0 < *(short *)(DAT_00216478 + param_1))) {
        iVar3 = *(int *)(param_1 + 0x964);
        if (*(int *)(param_1 + 0x960) <= iVar3) {
          iVar3 = iVar3 - *(int *)(param_1 + 0x960);
        }
        pfVar6 = (float *)(*(int *)(param_1 + 0x95c) + iVar3 * 0x28);
        func_004FC994(param_1 + 0x5a8U,(int)ALBW_AS_U32(pfVar6[6]));
        func_004FCC24(param_1 + 0x5a8U,(int)ALBW_AS_U32(pfVar6[8]));
        func_004CF478((int)ALBW_AS_U32(pfVar6[6]),0);
        func_00151148((int)ALBW_AS_U32(pfVar6[8]),0);
        pcStack_24 = s_SE_EN_DAMAGE_0021647c;
        iStack_28 = iRam0021648c;
        func_00150A84((int *)param_1,&iStack_28,0);
        iVar3 = *(int *)(param_1 + 0x968);
        if (0 < iVar3) {
          iVar3 = iVar3 + -1;
          iVar4 = *(int *)(param_1 + 0x964) + 1;
          *(int *)(param_1 + 0x964) = iVar4;
          if (*(int *)(param_1 + 0x960) <= iVar4) {
            *(undefined4 *)(param_1 + 0x964) = 0;
          }
          *(int *)(param_1 + 0x968) = iVar3;
        }
        *(int *)(param_1 + 0xa8c) = iVar3;
        uVar5 = *(undefined4 *)(param_3 + 0x10);
        uVar7 = *(undefined4 *)(param_3 + 0x14);
        *(undefined4 *)(param_1 + 0xa08) = *(undefined4 *)(param_3 + 0xc);
        *(undefined4 *)(param_1 + 0xa0c) = uVar5;
        *(undefined4 *)(param_1 + 0xa10) = uVar7;
        iVar3 = *(int *)(param_1 + 4);
        uVar1 = *(undefined2 *)(param_1 + 0x2e);
        uVar5 = *(undefined4 *)(param_1 + 0x2cc);
        fStack_308 = 0.0;
        uStack_304 = 0;
        uStack_30c = 0;
        uStack_2e0 = 0;
        uStack_2dc = 0;
        uStack_68 = 0;
        func_002DFF7C(&iStack_328);
        iStack_328 = func_0019B04C(*puRam00216490);
        uStack_2dc = uVar5;
        func_004D80A4(&fStack_40,(uint)ALBW_AS_U32(pfVar6[9]),fRam00216494);
        uStack_3c = uRam00216498;
        func_0051E5F8(*piRam0021649c,afStack_64,&fStack_40,*(float *)(iVar3 + 0x2c),
                      *(float *)(iVar3 + 0x30));
        func_00115CE4(afStack_34,afStack_64,pfRam002164a0);
        func_00115C54(afStack_324,afStack_34,pfVar6);
        fStack_308 = pfVar6[9];
        uStack_2fe = uVar1;
        func_004C43E0(*piRam002164a4,&iStack_328);
        uVar5 = uRam002164a8;
        *(undefined4 *)(param_1 + 0xae0) = 0x14;
        *(undefined4 *)(param_1 + 0xae4) = uVar5;
        uVar5 = uRam002164ac;
        *(undefined4 *)(param_1 + 0xadc) = 0;
        *(undefined4 *)(param_1 + 0xaec) = 0x3c;
        *(undefined4 *)(param_1 + 0xaf0) = uVar5;
        param_2 = 0xf;
        *(undefined4 *)(param_1 + 0xae8) = 0;
      }
    }
  }
  return param_2;
}

