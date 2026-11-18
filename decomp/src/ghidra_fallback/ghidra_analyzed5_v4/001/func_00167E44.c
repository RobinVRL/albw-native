#include "ghidra_types.h"

extern int func_003FF924(int param_1,char *param_2);
extern int func_00582328(int param_1,int *param_2,undefined4 param_3,uint param_4);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern undefined DAT_00000040;
extern int DAT_001680a0;
extern int *DAT_001680a4;
extern undefined2 DAT_001680a8;
extern int DAT_001680e4;
extern double DAT_001680e8;
extern double DAT_001680f0;
extern undefined DAT_001680f8;
extern undefined DAT_001680fc;

// GLOBAL DAT_00000040 undefined
// GLOBAL DAT_001680a0 int
// GLOBAL DAT_001680a4 int *
// GLOBAL DAT_001680a8 undefined2
// GLOBAL DAT_001680e4 int
// GLOBAL DAT_001680e8 double
// GLOBAL DAT_001680f0 double
// GLOBAL DAT_001680f8 undefined
// GLOBAL DAT_001680fc undefined
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int
// USA 00167E44 <- EU 00167E48 (Ghidra, function missing from the decomp table)

void func_00167E44(undefined4 param_1,undefined4 *param_2,byte *param_3,uint param_4,int param_5,
                  int param_6)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar11;
  double dVar9;
  double dVar10;
  undefined8 uVar12;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(int *)(albw_frame + 0x0))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x4))
  #define local_48 (*(short * *)(albw_frame + 0x8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_30 (*(int *)(albw_frame + 0x20))
  #define local_2c (*(short * *)(albw_frame + 0x24))
  #define iStack_28 (*(int *)(albw_frame + 0x28))
  #define pbStack_24 (*(byte * *)(albw_frame + 0x2c))
  puVar4 = param_2;
  if ((param_5 == -0x99) ||
     (puVar4 = (undefined4 *)(uint)*(byte *)(param_5 + 0x99), puVar4 != (undefined4 *)&DAT_00000040)
     ) {
    if (param_3 != (byte *)0x0) {
      puVar4 = (undefined4 *)(uint)*param_3;
    }
    if (param_3 != (byte *)0x0 && puVar4 != (undefined4 *)&DAT_00000040) {
      local_48 = (short *)0x0;
      local_44 = 0;
      local_3c = 0xffffffff;
      local_40 = 0;
      uStack_4c = *(undefined4 *)(param_6 + 0x20);
      local_50 = DAT_001680a0;
      iStack_28 = DAT_001680a0;
      iVar5 = *DAT_001680a4;
      if ((iVar5 != 0) &&
         (pbStack_24 = param_3, iVar2 = func_00582328(iVar5,&local_50,param_3,param_4), iVar2 != 0))
      {
        iVar5 = func_005826A4(iVar5,(int *)&local_48,&local_50,&iStack_28);
        local_30 = DAT_001680e4;
        if (iVar5 == 0) {
          local_48 = &DAT_001680a8;
        }
        *param_2 = local_48;
        local_2c = local_48;
        (**(code **)(local_30 + 8))(&local_30);
        iVar5 = 0;
        do {
          if (local_2c[iVar5] == 0) {
            if (iVar5 < 0x40001) goto LAB_00167ff4;
            break;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x40001);
        iVar5 = 0;
LAB_00167ff4:
        iVar5 = iVar5 + 1;
        psVar7 = local_48;
        do {
          while( true ) {
            sVar1 = *psVar7;
            if (sVar1 == 0) {
              if (iVar5 < 0x11) {
                uVar3 = 0x10;
              }
              else if (iVar5 < 0x20) {
                uVar3 = 0x20;
              }
              else if (iVar5 < 0x40) {
                uVar3 = 0x40;
              }
              else if (iVar5 < 0x80) {
                uVar3 = 0x80;
              }
              else {
                uVar3 = 0x100;
              }
              param_2[2] = uVar3;
              return;
            }
            if (sVar1 == 0xe) break;
            if (sVar1 == 0xf) {
              psVar6 = psVar7 + 3;
              goto LAB_00168034;
            }
LAB_00168058:
            psVar7 = psVar7 + 1;
          }
          psVar6 = (short *)((int)psVar7 + (ushort)psVar7[3] + 8);
LAB_00168034:
          bVar8 = psVar7 == (short *)0x0;
          psVar7 = psVar6;
          if (bVar8) goto LAB_00168058;
          iVar5 = iVar5 + 0x10;
          func_003FF924(param_5,&DAT_001680fc);
        } while( true );
      }
    }
  }
  else {
    uVar12 = *(undefined8 *)(param_5 + 0x3c);
    iVar5 = (**(code **)(**(int **)(param_5 + 0xb4) + 0x2c))(*(int **)(param_5 + 0xb4));
    fVar11 = (float)VectorUnsignedToFloat((uint)(iVar5 << 8) >> 0x18,(byte)(in_fpscr >> 0x15) & 3);
    dVar9 = (double)VectorSignedToFloat((int)(ALBW_AS_F32(uVar12) / fVar11) *
                                        (int)(ALBW_AS_F32(((ulonglong)uVar12 >> 0x20)) /
                                             *(float *)(param_5 + 0xbc)) * 3 + 0x10,
                                        (byte)(in_fpscr >> 0x15) & 3);
    dVar10 = DAT_001680e8;
    if ((DAT_001680e8 <= dVar9) && (dVar10 = dVar9, DAT_001680f0 < dVar9)) {
      dVar10 = DAT_001680f0;
    }
    *param_2 = &DAT_001680f8;
    uVar3 = VectorFloatToSigned(dVar10,3);
    param_2[2] = uVar3;
    param_2[1] = uVar3;
  }
  return;
}

