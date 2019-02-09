def main():
    while(True):
        try:
            nums =  [int(num) for num in input().split()]
            subMax = nums[0]
            subMin = nums[0]
            maxProd = nums[0]
            for i in range(1,len(nums)-1):

                if nums[i] > 0:
                    subMax = max(subMax*nums[i],nums[i])
                    subMin = min(subMin*nums[i],nums[i])
                else:
                    tempMax = max(subMin*nums[i],nums[i])
                    subMin = min(subMax*nums[i],nums[i])
                    subMax = tempMax

                maxProd = max(maxProd,subMax)

            print(maxProd)

        except:
            break

if __name__=="__main__":
    main()
