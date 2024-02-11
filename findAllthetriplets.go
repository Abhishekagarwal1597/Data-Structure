func threeSum(nums []int) [][]int {
    count := 0
	sort.Ints(nums)
    target := 0

    newArray := [][]int{}
	for i := 0; i < len(nums); i++ {
		right := len(nums) - 1
		left := i + 1
		// removing duplicates
		if i > 0 && nums[i] == nums[i-1] {
			continue
		}
		for left < right {
			sum := nums[i] + nums[left] + nums[right]
			if sum == target {
                // removing duplicates
				for left < right && nums[left] == nums[left+1] {
					left++
				} 
                for left < right && nums[right] == nums[right-1] {
					right--
				}
				fmt.Println("(", nums[i], ",", nums[left], ",", nums[right], ")")
                newArray = append(newArray, []int{nums[i], nums[left], nums[right]})
				count++
				left++
				right--
				
			} else if sum < target {
				left++
			} else {
				right--
			}

		}
	}
	return newArray
}
