using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Aula {
    public class Book {
        public int Id { get; set; }
        public string Isbn { get; set; }
        public string Title { get; set; }
        public double Value { get; set; }

        public Book(int id, string isbn, string title, double value = 0) {
            this.Id = id;
            this.Isbn = isbn;
            this.Title = title;
            this.Value = value;
        }
    }
}