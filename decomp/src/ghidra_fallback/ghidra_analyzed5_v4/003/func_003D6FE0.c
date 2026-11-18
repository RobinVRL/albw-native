#include "ghidra_types.h"

extern int func_003D7BE4(undefined4 param_1,int *param_2,uint param_3);
extern int func_003D9974(int *param_1,uint param_2,uint param_3);
extern int func_003D9B18(int *param_1,int param_2);
extern int func_003D9B60(int *param_1);
extern int func_003D9ECC(int *param_1,int param_2);
extern int func_003DA0A0(uint param_1);
extern int func_003DA38C(int *param_1,int param_2);
extern int func_003DA464(int *param_1,int param_2,int param_3);

// USA 003D6FE0 <- EU 003D6FC0 (Ghidra, non-matching)

int func_003D6FE0(int *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined1 * *)(albw_frame + 0x0))
  #define local_2c (*(undefined1 * *)(albw_frame + 0x4))
  #define local_28 (*(int * *)(albw_frame + 0x8))
  iVar11 = 0;
LAB_003d6fd4:
  do {
    while( true ) {
      iVar4 = *param_1;
      bVar1 = *(byte *)(iVar4 + 8);
      if (bVar1 != 5) break;
      iVar4 = func_003D9974(param_2,0x2d,0x2d);
      if (iVar4 == 0) {
        return 2;
      }
      iVar4 = func_003DA0A0(0x2d);
      if (iVar4 != 0) {
        iVar6 = 0;
        do {
          uVar8 = (uint)*(ushort *)(iVar4 + iVar6 * 2 + 2);
          if (uVar8 == 0) break;
          iVar5 = func_003D9974(param_2,uVar8,uVar8);
          if (iVar5 == 0) {
            return 2;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 3);
      }
      iVar11 = iVar11 + 1;
      *param_1 = *(int *)(*param_1 + 4);
    }
    if (bVar1 < 5) {
      if (bVar1 == 0) {
        iVar6 = *(int *)(iVar4 + 4);
        uVar8 = (uint)*(ushort *)(iVar4 + 10);
        *param_1 = iVar6;
        if (*(char *)(iVar6 + 8) == '\x05') {
          iVar4 = *(int *)(iVar6 + 4);
          *param_1 = iVar4;
          if (*(char *)(iVar4 + 8) == '\0') {
            uVar3 = *(ushort *)(iVar4 + 10);
            if (uVar3 < uVar8) {
              return 7;
            }
            for (; uVar8 <= uVar3; uVar8 = uVar8 + 1 & 0xffff) {
              iVar4 = func_003D9974(param_2,uVar8,uVar8);
              if (iVar4 == 0) {
LAB_003d7154:
                iVar4 = 2;
                goto LAB_003d7060;
              }
              iVar4 = func_003DA0A0(uVar8);
              if (iVar4 != 0) {
                iVar6 = 0;
                do {
                  uVar7 = (uint)*(ushort *)(iVar4 + iVar6 * 2 + 2);
                  if (uVar7 == 0) break;
                  iVar5 = func_003D9974(param_2,uVar7,uVar7);
                  if (iVar5 == 0) goto LAB_003d7154;
                  iVar6 = iVar6 + 1;
                } while (iVar6 < 3);
              }
            }
            iVar4 = 0;
            *param_1 = *(int *)(*param_1 + 4);
          }
          else {
            iVar4 = func_003D7BE4(param_1,param_2,uVar8);
            if (iVar4 == 0) {
              uVar8 = 0x2d;
              goto LAB_003d7054;
            }
          }
        }
        else {
LAB_003d7054:
          iVar4 = func_003D7BE4(param_1,param_2,uVar8);
        }
LAB_003d7060:
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar11 = iVar11 + 1;
      }
      else if (bVar1 == 2) {
        *param_1 = *(int *)(iVar4 + 4);
        iVar4 = func_003D6FE0(param_1,param_2);
        if (iVar4 != 0) {
          return iVar4;
        }
        *param_1 = *(int *)(*param_1 + 4);
      }
      else {
        if (bVar1 != 3) {
          if (bVar1 != 4) {
            return 8;
          }
          if (iVar11 != 0) {
            return 0;
          }
          return 6;
        }
        local_28 = (int *)param_1[5];
        *param_1 = *(int *)(*param_1 + 4);
        local_30 = (undefined1 *)&local_30;
        local_2c = (undefined1 *)&local_30;
        iVar4 = func_003D6FE0(param_1,(int *)&local_30);
        if (iVar4 != 0) {
          if ((local_28 != (int *)0x0) && (puVar10 = local_2c, (undefined1 **)local_2c != &local_30)
             ) {
            do {
              puVar9 = *(undefined1 **)(puVar10 + 4);
              func_003DA464(local_28,(int)puVar10,1);
              puVar10 = puVar9;
            } while ((undefined1 **)puVar9 != &local_30);
          }
          return iVar4;
        }
        *param_1 = *(int *)(*param_1 + 4);
        iVar4 = func_003D9B60((int *)&local_30);
        if ((iVar4 == 0) || (iVar4 = func_003D9B18(param_2,(int)&local_30), iVar4 == 0)) {
          if (local_28 == (int *)0x0) {
            return 2;
          }
          puVar10 = local_2c;
          if ((undefined1 **)local_2c != &local_30) {
            do {
              puVar9 = *(undefined1 **)(puVar10 + 4);
              func_003DA464(local_28,(int)puVar10,1);
              puVar10 = puVar9;
            } while ((undefined1 **)puVar9 != &local_30);
            return 2;
          }
          return 2;
        }
        if (local_28 != (int *)0x0) {
          puVar10 = local_2c;
          if ((undefined1 **)local_2c != &local_30) {
            do {
              puVar9 = *(undefined1 **)(puVar10 + 4);
              func_003DA464(local_28,(int)puVar10,1);
              puVar10 = puVar9;
            } while ((undefined1 **)puVar9 != &local_30);
          }
LAB_003d749c:
          local_28 = (int *)0x0;
          local_30 = (undefined1 *)&local_30;
          local_2c = (undefined1 *)&local_30;
        }
      }
      goto LAB_003d6fd4;
    }
    if (bVar1 == 6) {
      iVar4 = *(int *)(iVar4 + 4);
      *param_1 = iVar4;
      cVar2 = *(char *)(iVar4 + 8);
      if (iVar11 == 0) {
        if (cVar2 == '\x06') {
          return 6;
        }
        if (cVar2 == '\x04') {
          return 6;
        }
      }
      else if (cVar2 != '\x06' && cVar2 != '\x04') {
        local_28 = (int *)param_1[5];
        local_30 = (undefined1 *)&local_30;
        local_2c = (undefined1 *)&local_30;
        iVar4 = func_003D6FE0(param_1,(int *)&local_30);
        if (iVar4 != 0) {
          if ((local_28 != (int *)0x0) && (puVar10 = local_2c, (undefined1 **)local_2c != &local_30)
             ) {
            do {
              puVar9 = *(undefined1 **)(puVar10 + 4);
              func_003DA464(local_28,(int)puVar10,1);
              puVar10 = puVar9;
            } while ((undefined1 **)puVar9 != &local_30);
          }
          return iVar4;
        }
        iVar4 = func_003D9ECC(param_2,(int)&local_30);
        if (iVar4 == 0) {
          if (local_28 == (int *)0x0) {
            return 2;
          }
          puVar10 = local_2c;
          if ((undefined1 **)local_2c != &local_30) {
            do {
              puVar9 = *(undefined1 **)(puVar10 + 4);
              func_003DA464(local_28,(int)puVar10,1);
              puVar10 = puVar9;
            } while ((undefined1 **)puVar9 != &local_30);
            return 2;
          }
          return 2;
        }
        if (local_28 != (int *)0x0) {
          puVar10 = local_2c;
          if ((undefined1 **)local_2c != &local_30) {
            do {
              puVar9 = *(undefined1 **)(puVar10 + 4);
              func_003DA464(local_28,(int)puVar10,1);
              puVar10 = puVar9;
            } while ((undefined1 **)puVar9 != &local_30);
          }
          goto LAB_003d749c;
        }
      }
    }
    else {
      if (bVar1 == 7) {
        iVar4 = func_003DA38C(param_2,(uint)*(byte *)(iVar4 + 10));
        if (iVar4 == 0) {
          return 2;
        }
        iVar4 = *(int *)(*param_1 + 4);
      }
      else {
        if (bVar1 != 8) {
          if (bVar1 != 0x12) {
            return 8;
          }
          return 5;
        }
        local_28 = (int *)param_1[5];
        local_30 = (undefined1 *)&local_30;
        local_2c = (undefined1 *)&local_30;
        iVar4 = func_003DA38C((int *)&local_30,(uint)*(byte *)(*param_1 + 10));
        if (((iVar4 == 0) || (iVar4 = func_003D9B60((int *)&local_30), iVar4 == 0)) ||
           (iVar4 = func_003D9B18(param_2,(int)&local_30), iVar4 == 0)) {
          if ((local_28 != (int *)0x0) && (puVar10 = local_2c, (undefined1 **)local_2c != &local_30)
             ) {
            do {
              puVar9 = *(undefined1 **)(puVar10 + 4);
              func_003DA464(local_28,(int)puVar10,1);
              puVar10 = puVar9;
            } while ((undefined1 **)puVar9 != &local_30);
          }
          return 2;
        }
        if (local_28 != (int *)0x0) {
          puVar10 = local_2c;
          if ((undefined1 **)local_2c != &local_30) {
            do {
              puVar9 = *(undefined1 **)(puVar10 + 4);
              func_003DA464(local_28,(int)puVar10,1);
              puVar10 = puVar9;
            } while ((undefined1 **)puVar9 != &local_30);
          }
          local_28 = (int *)0x0;
          local_30 = (undefined1 *)&local_30;
          local_2c = (undefined1 *)&local_30;
        }
        iVar4 = *(int *)(*param_1 + 4);
      }
      iVar11 = iVar11 + 1;
      *param_1 = iVar4;
    }
  } while( true );
}

