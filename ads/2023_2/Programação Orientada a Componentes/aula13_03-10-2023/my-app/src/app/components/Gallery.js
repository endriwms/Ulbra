'use client'

import Button from "./Button"
import Header from "./Header"
import ShowDetails from "./ShowDetails"
import Image from "./Image"
import { useState } from "react"
import { data } from "../data"

export default function Gallery() {
  const [index, setIndex] = useState(0)

  function nextItem() {
    if (index + 1 !== data.length) {
      setIndex(index + 1)
    }
  }
  function lastItem() {
    if (index - 1 !== data.length) {
      setIndex(index - 1)
    }
  }

  let galleryData = data[index]

  return (
    <div className="flex flex-col w-1/2 p-6 bg-zinc-900 items-start m-auto">
      <div className="flex space-x-1 mb-4">
        <div className="w-3 h-3 bg-red-500 rounded-full"></div>
        <div className="w-3 h-3 bg-green-500 rounded-full"></div>
        <div className="w-3 h-3 bg-yellow-500 rounded-full"></div>
      </div>

      <div className="w-full flex space-y-2 text-white justify-between items-end">
        <div className="space-y-2">
          <Header
            title={galleryData.name}
            index={index + 1}
            sizeList={data.length} />

          <Image
            urlImage={galleryData.url}
            alt={galleryData.alt} />

          <ShowDetails
            description={galleryData.description} />
          <div className="space-x-2">
            <Button
              text={'Anterior'}
              click={lastItem} />
            <Button
              text={'Proximo'}
              click={nextItem} />
          </div>
        </div>


      </div>
    </div>
  )
}