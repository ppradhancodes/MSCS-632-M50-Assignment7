let mean lst =
  float_of_int (List.fold_left (+) 0 lst) /. float_of_int (List.length lst)

let median lst =
  let sorted = List.sort compare lst in
  let len = List.length sorted in
  if len mod 2 = 0 then
    (float_of_int (List.nth sorted (len/2 - 1)) +. 
     float_of_int (List.nth sorted (len/2))) /. 2.0
  else
    float_of_int (List.nth sorted (len/2))

let mode lst =
  let counts = List.fold_left
    (fun acc x -> 
      let count = try List.assoc x acc with Not_found -> 0 in
      (x, count+1) :: (List.remove_assoc x acc))
    [] lst in
  let max_count = List.fold_left (fun acc (_,c) -> max acc c) 0 counts in
  List.sort compare 
    (List.map fst (List.filter (fun (_,c) -> c = max_count) counts))
