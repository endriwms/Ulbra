import { useState } from "react"

export default function ShowDetails({ description }){
  const [enable, setEnable] = useState(false)

  function handleClick() {  
    setEnable(!enable)
  }

  return (
    <div className="space-y-2">
      {enable &&
        <p className="text-zinc-300">{description}</p> 
      }
      <button
        onClick={handleClick}
        className="px-4 py-2 bg-zinc-800 rounded-xl">
        {enable ? "Hide details" : "Show details"}
      </button>  
    </div>
  )
}